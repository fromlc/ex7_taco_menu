//------------------------------------------------------------------------------
// TRACKS EACH FILLING COUNT
// 
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
// LRC Use constexpr to evaluate constants of simple type at compile time.
// In particular, use a constexpr constant for array declarations.
constexpr int NUM_FILLINGS = 5;     // use a constexpr constant for array declaration
//const float COST_PER_FILLING = 0.75;
constexpr float COST_PER_FILLING = 0.75;

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
void display_taco_price(int number_of_fillings);
// LRC when you pass an array as a parameter, 
// don't put anything between the square brackets
//void display_taco_ingredients(int ingred[4]);
void display_taco_ingredients(int ingred[]);

void display_goodbye();


//------------------------------------------------------------------------------
// entry point
//------------------------------------------------------------------------------
int main() {

    setup();

    int number_of_fillings = 0;
// LRC use empty curly braces to initialize an entire array of int to 0
    //int ingred[5] = { 0,0,0,0,0};
// LRC avoid using hard-coded numbers in your code
    //int ingred[5]{};
    int ingred[NUM_FILLINGS]{};

    while (true) {
        char option = get_menu_option();

        if ((option == 'F') || (option == 'S') || (option == 'P') || (option == 'L') || (option == 'A')) {
            number_of_fillings++;
        }
        if (option == 'F') {
            display_fish_filling();
// LRC Use constants for ingred[] array indexes - 
//      hard-coded numbers are bug-prone.

            ingred[0]++;
        }
        else if (option == 'S'){
            display_salsa_filling();
            ingred[1]++;
         }
        else if (option == 'P'){
            display_pico_filling();
            ingred[2]++;
}
        else if (option == 'L'){
            display_lettuce_filling();
            ingred[3]++;
        }
        else if (option == 'A'){
            display_avocado_filling();
            ingred[4]++;
        }
        else if (option == 'Q')
            break;
        else
            display_error();
    } 
    if (number_of_fillings != 0) {
        display_taco_price(number_of_fillings);
        display_taco_ingredients(ingred);
    }
    else
        display_goodbye();

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
// calculate & display price 
//------------------------------------------------------------------------------
void display_taco_price(int number_of_fillings) {
    
    float total_price;
    total_price = number_of_fillings * COST_PER_FILLING;

        cout << "\nSounds good, Enjoy!\n";
        cout << "\nThe total cost of this taco is $" << total_price << "\n";
}


//------------------------------------------------------------------------------
// display ingredients ordered
//------------------------------------------------------------------------------
// LRC when your function receives an array as a parameter, 
// don't put anything between the square brackets
// void display_taco_ingredients(int ingred[5]){
void display_taco_ingredients(int ingred[]){
    cout << "\nIngredients used:";
    cout << "\n Fish: " << ingred[0];
    cout << "\n Salsa: " << ingred[1];
    cout << "\n Pico de Gallo: " << ingred[2];
    cout << "\n Lettuce: " << ingred[3];
    cout << "\n Avocado: " << ingred[4];

}


//------------------------------------------------------------------------------
// display goodbye message
//------------------------------------------------------------------------------
void display_goodbye() {
    cout << "\nGoodbye!\n";
}
