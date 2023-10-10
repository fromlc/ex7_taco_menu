//------------------------------------------------------------------------------
// taco_menu.cpp
// 
// taco menu options
//------------------------------------------------------------------------------
#include "taco_cmd.h"

#include <iostream>

using namespace std;

//------------------------------------------------------------------------------
// constants
//------------------------------------------------------------------------------
static const string MENU_STR =
    "F)ish, S)alsa, P)ico de gallo, L)ettuce, A)vocado Q)uit: ";

//------------------------------------------------------------------------------
// taco fillings available
//------------------------------------------------------------------------------
static enum Fillings {
    F_FISH = 'F',
    F_SALSA = 'S',
    F_PICO = 'P',
    F_LETTUCE = 'L',
    F_AVOCADO = 'A',
    F_QUIT = 'Q',
};

//------------------------------------------------------------------------------
// local function prototypes
//------------------------------------------------------------------------------
void display_error();

//------------------------------------------------------------------------------
// display taco menu options
//------------------------------------------------------------------------------
char get_menu_option() {

    char topping{};
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
// menu option not offered
//------------------------------------------------------------------------------
void display_error() {

    cerr << "Sorry, that filling is not available.\n";
}

