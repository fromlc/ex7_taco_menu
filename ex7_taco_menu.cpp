//------------------------------------------------------------------------------
// ex7_taco_menu.cpp
//
// Practice char input menu structure
//------------------------------------------------------------------------------
#include <iostream>

using namespace std;

//------------------------------------------------------------------------------
// constants
//------------------------------------------------------------------------------
const string MENU_STR = "F)ish, S)alsa, P)ico de gallo, L)ettuce, A)vocado Q)uit: ";

//------------------------------------------------------------------------------
// local function prototypes
//------------------------------------------------------------------------------
void setup();
char get_menu_option();
bool menu_option_selected();
void display_fish_filling();
void display_salsa_filling();
void display_pico_filling();
void display_lettuce_filling();
void display_avocado_filling();
void display_error();
void display_taco_ready(int);

//------------------------------------------------------------------------------
// taco fillings available
//------------------------------------------------------------------------------
enum Fillings {
    F_FISH = 'F',
    F_SALSA = 'S',
    F_PICO = 'P',
    F_LETTUCE = 'L',
    F_AVOCADO = 'A',
    F_QUIT = 'Q',
};

//------------------------------------------------------------------------------
// entry point
//------------------------------------------------------------------------------
int main() {

    setup();

    int num_fillings = 0;

    while (true) {
        if (!menu_option_selected())
            break;

        num_fillings++;
    }

    if (num_fillings > 0)
        display_taco_ready(num_fillings);

    return 0;
}


//------------------------------------------------------------------------------
// display app banner and instructions
//------------------------------------------------------------------------------
void setup() {

    cout << "\nProf. Linda C's Taco Shop";
    cout << "\n\nChoose your taco fillings!\n";
}

//------------------------------------------------------------------------------
// display taco menu options
//------------------------------------------------------------------------------
char get_menu_option() {

    char topping;
    cout << '\n' << MENU_STR;
    cin >> topping;
    return toupper(topping);
}

//------------------------------------------------------------------------------
// - processes selected menu option
// - returns true if menu option was valid, false otherwise
//------------------------------------------------------------------------------
bool menu_option_selected() {

    switch (get_menu_option()) {
    case F_FISH:
        display_fish_filling();
        return true;

    case F_SALSA:
        display_salsa_filling();
        return true;

    case F_PICO:
        display_pico_filling();
        return true;

    case F_LETTUCE:
        display_lettuce_filling();
        return true;

    case F_AVOCADO:
        display_avocado_filling();
        return true;

    case F_QUIT:
        return false;

    default:
        display_error();
    }

    return false;
}

//------------------------------------------------------------------------------
// add fish to taco order
//------------------------------------------------------------------------------
void display_fish_filling() {

    cout << "Adding freshly caught mahi-mahi\n";
}

//------------------------------------------------------------------------------
// add salsa to taco order
//------------------------------------------------------------------------------
void display_salsa_filling() {

    cout << "Adding HOT homemade salsa\n";
}

//------------------------------------------------------------------------------
// add pico de gallo to taco order
//------------------------------------------------------------------------------
void display_pico_filling() {

    cout << "Adding diced tomato, onion, and chopped cilantro\n";
}

//------------------------------------------------------------------------------
// add shredded lettuce to taco order
//------------------------------------------------------------------------------
void display_lettuce_filling() {

    cout << "Adding crisp, shredded iceberg lettuce\n";
}

//------------------------------------------------------------------------------
// add sliced avocado to taco order
//------------------------------------------------------------------------------
void display_avocado_filling() {

    cout << "Adding creamy avocado slices\n";
}

//------------------------------------------------------------------------------
// menu option not offered
//------------------------------------------------------------------------------
void display_error() {

    cerr << "Sorry, that filling is not available.\n";
}


//------------------------------------------------------------------------------
// cleanup tasks
//------------------------------------------------------------------------------
void display_taco_ready(int filling_count) {

    cout << "\nYou chose " << filling_count << " fillings.\n";
    cout << "Sounds delicious! Enjoy your taco.\n";
}
