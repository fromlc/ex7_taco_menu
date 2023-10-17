//------------------------------------------------------------------------------
// INCREMENTS IN MAIN LOOP
// 
// ex7_taco_menu.cpp
//
// Practice char input menu structure
//------------------------------------------------------------------------------
#include <iostream>
#include <iomanip>
using namespace std;

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
void display_taco_ready();
void display_taco_price(int number_of_fillings);


//------------------------------------------------------------------------------
// entry point
//------------------------------------------------------------------------------
int main() {

    int number_of_fillings = 0;

    setup();

    while (true) {
        char option = get_menu_option();

        if (option == 'F') {
            number_of_fillings++;
            display_fish_filling();
        }
        else if (option == 'S') {
            number_of_fillings++;
            display_salsa_filling();
        }
        else if (option == 'P') {
            number_of_fillings++;
            display_pico_filling();
        }
        else if (option == 'L') {
            number_of_fillings++;
            display_lettuce_filling();
        }
        else if (option == 'A') {
            number_of_fillings++;
            display_avocado_filling();
        }
        else if (option == 'Q') {
            if (number_of_fillings == 0)
                cout << "\nGoodbye!\n";

            else {
                display_taco_price(number_of_fillings);
                display_taco_ready();
            }

            break;
        }
        else
            display_error();
    }

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
void display_taco_ready() {

    cout << "Sounds delicious! Enjoy your taco.\n";
}

//------------------------------------------------------------------------------
// show total number of fillings and price of taco
//------------------------------------------------------------------------------
void display_taco_price(int number_of_fillings) {
    float price = number_of_fillings * COST_PER_FILLING;
    cout << "\nNumber of fillings: " << number_of_fillings << "\n";
    cout << "Price of taco: $" << setprecision(2) << fixed << price << "\n";
}