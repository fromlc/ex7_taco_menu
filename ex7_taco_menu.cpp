//------------------------------------------------------------------------------
// ex7_taco_menu.cpp
//
// Practice char input menu structure
//------------------------------------------------------------------------------
#include "cmd_taco.h"
#include "menu_taco.h"

#include <iostream>

using namespace std;

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
// cleanup tasks
//------------------------------------------------------------------------------
void display_taco_ready(int filling_count) {

    cout << "\nYou chose " << filling_count << " fillings.\n";
    cout << "Sounds delicious! Enjoy your taco.\n";
}
