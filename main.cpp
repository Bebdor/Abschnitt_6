#include "utils/main.h"
using namespace std;


/**
 * @file main.cpp
 * @authors Ömer Kersikoglu, Nils Haberland, Justin Bischoff
 * @brief Entry point of the program.
 *
 * This is the main file for the program. It includes the main() function
 * which serves as the entry point of the program. It initializes necessary
 * components, performs the program logic, and terminates the program
 * gracefully.
 */

int main() {
    int x;
    cout << "Bitte gib ein, welche Task ausgeführt werden soll\n";
    cin >> x;

    switch (x) {

        case 2:
            aufgabeZwei();
            break;
        case 3:
            aufgabeDrei();
            break;
        default:
            throw InvalidInputException();
    }
}