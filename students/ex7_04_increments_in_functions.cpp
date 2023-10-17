//------------------------------------------------------------------------------
// INCREMENTS IN FUNCTIONS
// 
// ex7_taco_menu.cpp
//
// Practice char input menu structure
//------------------------------------------------------------------------------
#include <iostream>
using namespace std;
int number_of_fillings = 0;

//------------------------------------------------------------------------------
// constants
//------------------------------------------------------------------------------
const string MENU_STR = "F)ish, S)alsa, P)ico de gallo, L)ettuce, A)vocado Q)uit: ";
const float COST_PER_FILLING = 0.75;
//------------------------------------------------------------------------------
// local function prototypes
//------------------------------------------------------------------------------
void setup();
char get_menu_option();
void display_fish_filling();
void display_salsa_filling();
void display_pico_filling();
void display_lettuce_filling();
void display_avocado_filling();
void display_error();
void display_taco_ready(float total_price, bool ordered);

//------------------------------------------------------------------------------
// entry point
//------------------------------------------------------------------------------
int main() {

    setup();
    float total_price = 0;
    bool fillings = false;
    while (true) {
        char option = get_menu_option();

        if (option == 'F')
            display_fish_filling();
        else if (option == 'S')
            display_salsa_filling();
        else if (option == 'P')
            display_pico_filling();
        else if (option == 'L')
            display_lettuce_filling();
        else if (option == 'A')
            display_avocado_filling();
        else if (option == 'Q')
            break;
        else
            display_error();
        total_price += COST_PER_FILLING;
        fillings = true;
    }

    if (!fillings) {
        cout << "Goodbye!" << endl;
    }
    display_taco_ready(total_price,fillings);

    return 0;

}


//------------------------------------------------------------------------------
// display app banner and instructions
//------------------------------------------------------------------------------
void setup() {

    cout << "\nJoseph's Taco Shop";
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
// add fish to taco order
//------------------------------------------------------------------------------
void display_fish_filling() {
    number_of_fillings++;
    cout << "Adding freshly caught mahi-mahi\n";
}

//------------------------------------------------------------------------------
// add salsa to taco order
//------------------------------------------------------------------------------
void display_salsa_filling() {
    number_of_fillings++;
    cout << "Adding HOT homemade salsa\n";
}

//------------------------------------------------------------------------------
// add pico de gallo to taco order
//------------------------------------------------------------------------------
void display_pico_filling() {
    number_of_fillings++;
    cout << "Adding diced tomato, onion, and chopped cilantro\n";
}

//------------------------------------------------------------------------------
// add shredded lettuce to taco order
//------------------------------------------------------------------------------
void display_lettuce_filling() {
    number_of_fillings++;
    cout << "Adding crisp, shredded iceberg lettuce\n";
}

//------------------------------------------------------------------------------
// add sliced avocado to taco order
//------------------------------------------------------------------------------
void display_avocado_filling() {
    number_of_fillings++;
    cout << "Adding creamy avocado slices\n";
}

//------------------------------------------------------------------------------
// menu option not offered
//------------------------------------------------------------------------------
void display_error() {
    number_of_fillings++;
    cerr << "Sorry, that filling is not available.\n";
}


//------------------------------------------------------------------------------
// cleanup tasks
//------------------------------------------------------------------------------

void display_taco_ready(float total_price, bool ordered) {  
    if (ordered) {
        cout << "Sounds delicious! Enjoy your taco.\n";
        cout << "Total Price: $" << total_price << endl;
    }
}