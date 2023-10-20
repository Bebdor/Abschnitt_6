#include "main.h"

/**
 * @authors Ömer Kersikoglu Nils Haberland Justin Bischoff
 * @brief This function performs task three.
 *
 * This function takes over the execution of task three.
 * It does not take any input parameters and does not return any value.
 * Instead, it performs the necessary operations to complete task three.
 * Task three is for the program to determine the size of a file in bytes and output it to the screen.
 *
 * @note This function assumes that all necessary variables and functions are
 *       declared and defined before its invocation.
 */

int aufgabeDrei() {
    string datenPfad;

    cout << "Geben Sie den Dateipfad ein: ";
    getline(cin, datenPfad);

    ifstream file(datenPfad, ios::binary | ios::ate);

    if (!file) {
        cerr << "Konnte die Datei nicht öffnen.\n";
        throw CannotOpenFileException();
    }

    cout << "Die Größe der Datei beträgt: " << file.tellg() << " Bytes\n";

    return 0;
}