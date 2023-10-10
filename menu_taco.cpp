//------------------------------------------------------------------------------
// menu_taco.cpp
// 
// taco menu options
//------------------------------------------------------------------------------
#include <iostream>

using namespace std;

//------------------------------------------------------------------------------
// constants
//------------------------------------------------------------------------------
static const string MENU_STR =
    "F)ish, S)alsa, P)ico de gallo, L)ettuce, A)vocado Q)uit: ";

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

