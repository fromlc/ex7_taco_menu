//------------------------------------------------------------------------------
// CALL BY VALUE PARAM CHANGES LOST
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
// LRC use a floating point type to store floating point values.
//      The fractional part of whatever value you assign to an
//      int variable is lost. That's one reason why your app reports
//      a zero price for any taco.
//constexpr int filling_cost = .75;
// LRC use uppercase names for constants
//constexpr double filling_cost = .75;
constexpr double FILLING_COST = .75;
//------------------------------------------------------------------------------
// local function prototypes
//------------------------------------------------------------------------------
void setup();
char get_menu_option();
// LRC You don't need to pass the total cost as a parameter,
//      because you compute the total cost in function display_taco_price()
//      You don't need to pass filling_count either - use a global
//      variable. We'll discuss this in class on Week 9.
//void display_fish_filling(double total_cost, int filling_count);
//void display_salsa_filling(double total_cost, int filling_count);
//void display_pico_filling(double total_cost, int filling_count);
//void display_lettuce_filling(double total_cost, int filling_count);
//void display_avocado_filling(double total_cost, int filling_count);
void display_fish_filling();
void display_salsa_filling();
void display_pico_filling();
void display_lettuce_filling();
void display_avocado_filling();
void display_error();
//void display_taco_ready(double total_cost, int filling_count);
//void display_taco_price(double total_cost, int filling_count);
void display_taco_ready();
void display_taco_price();

// LRC use a global variable so all functions can see and update the value
//------------------------------------------------------------------------------
// globals
//------------------------------------------------------------------------------
int filling_count = 0;

//------------------------------------------------------------------------------
// entry point
//------------------------------------------------------------------------------
int main() {

    setup();
    
    double total_cost = 0.0;
// LRC use a global variable to count fillings.
//      When you pass filling_count as a parameter,
//      it only gets updated inside the function.
//      This is because only a copy of the value gets
//      passed. This is called "call by value" - we'll
//      discuss this in class on Week 9
    //int filling_count = 0;

    while (true) {
        char option = get_menu_option();

        if (option == 'F')
            // LRC display_fish_filling(total_cost, filling_count);
            display_fish_filling();
        else if (option == 'S')
            // LRC display_salsa_filling(total_cost, filling_count);
            display_salsa_filling();
        else if (option == 'P')
            // LRC display_pico_filling(total_cost, filling_count);
            display_pico_filling();
        else if (option == 'L')
            // LRC display_lettuce_filling(total_cost, filling_count);
            display_lettuce_filling();
        else if (option == 'A')
            // LRC display_avocado_filling(total_cost, filling_count);
            display_avocado_filling();
        else if (option == 'Q')
            break;
        else
            display_error();
    }

    // LRC display_taco_ready(total_cost, filling_count);
    // LRC display_taco_price(total_cost, filling_count);
     display_taco_ready();
     display_taco_price();

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
// LRC void display_fish_filling(double total_cost, int filling_count) {
void display_fish_filling() {
    
    cout << "Adding freshly caught mahi-mahi\n";
// LRC multiply number of fillings by filling cost in
//      function get_taco_price() instead of adding here
    //total_cost += filling_cost;
    filling_count++;
        
}

//------------------------------------------------------------------------------
// add salsa to taco order
//------------------------------------------------------------------------------
// LRC void display_salsa_filling(double total_cost, int filling_count) {
void display_salsa_filling() {
    
    cout << "Adding HOT homemade salsa\n";
// LRC multiply number of fillings by filling cost in
//      function get_taco_price() instead of adding here
    //total_cost += filling_cost;

    filling_count++;
}

//------------------------------------------------------------------------------
// add pico de gallo to taco order
//------------------------------------------------------------------------------
// LRC void display_pico_filling(double total_cost, int filling_count) {
void display_pico_filling() {
    
    cout << "Adding diced tomato, onion, and chopped cilantro\n";
// LRC multiply number of fillings by filling cost in
//      function get_taco_price() instead of adding here
    //total_cost += filling_cost;
    filling_count++;
}

//------------------------------------------------------------------------------
// add shredded lettuce to taco order
//------------------------------------------------------------------------------
// LRC void display_lettuce_filling(double total_cost, int filling_count) {
void display_lettuce_filling() {
    
    cout << "Adding crisp, shredded iceberg lettuce\n";
// LRC multiply number of fillings by filling cost in
//      function get_taco_price() instead of adding here
    //total_cost += filling_cost;
    filling_count++;
}

//------------------------------------------------------------------------------
// add sliced avocado to taco order
//------------------------------------------------------------------------------
// LRC void display_avocado_filling(double total_cost, int filling_count) {
void display_avocado_filling() {
    
    cout << "Adding creamy avocado slices\n";
// LRC multiply number of fillings by filling cost in
//      function get_taco_price() instead of adding here
    //total_cost += filling_cost;
    filling_count++;
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
// LRC void display_taco_ready(double total_cost, int filling_count) {
void display_taco_ready() {
    
    
    cout << "Sounds delicious! Enjoy your taco.\n";
}

//------------------------------------------------------------------------------
// closing
//------------------------------------------------------------------------------
// LRC void display_taco_price(double total_cost, int filling_count){
void display_taco_price(){
    
// LRC use uppercase names for constants
    //total_cost = filling_count * FILLING_COST;
// LRC declare a local variable to store the total cost
    double total_cost = filling_count * FILLING_COST;
    cout << "Total price for " << filling_count << " fillings: $" << fixed << setprecision(2) << total_cost << '\n';
}

