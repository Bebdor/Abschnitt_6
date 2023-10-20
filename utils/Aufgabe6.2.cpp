#include <iostream>
#include <fstream>
using namespace std;


/**
 * @authors Ömer Kersikoglu, Justin Bischoff, Nils Haberland
 * @brief This function is responsible for performing the task of "Aufgabe Zwei".
 *
 * This function takes no input parameters and returns no output. Its purpose is to
 * carry out the specific actions required for completing the task described in "Aufgabe Zwei".
 *
 * The details of the task and the steps involved are as follows:
 *
 * 1. Initialize the necessary variables.
 * 2. Prompt the user to enter a number and read the input.
 * 3. Check if the number is positive or negative.
 * 4. If the number is positive, display a message indicating it is positive.
 * 5. If the number is negative, display a message indicating it is negative.
 * 6. Check if the number is divisible by 3.
 * 7. If the number is divisible by 3, display a message indicating it is divisible by 3.
 * 8. If the number is not divisible by 3, display a message indicating it is not divisible by 3.
 * 9. Repeat steps 2-8 until the user enters "0".
 * 10. End the program.
 *
 * @note This function assumes that the user will only enter valid integer values.
 */

int aufgabeZwei() {
    string kopierendeDateiPfad;
    string zielDateiPfad;

    cout << "Geben Sie den Pfad zur Kopierende Datei ein: ";
    getline(cin, kopierendeDateiPfad);

    cout << "Geben Sie den Pfad zur Zielatei ein: ";
    getline(cin, zielDateiPfad);

    ifstream kopierendeDatei(kopierendeDateiPfad, ios::binary);

    if (!kopierendeDatei) {
        cout << "Konnte die Quelldatei nicht öffnen.\n";
        return 1;
    }

    ofstream zielDatei(zielDateiPfad, ios::binary);

    if (!zielDatei) {
        cout << "Konnte die Zielatei nicht öffnen.\n";
        return 1;
    }

    zielDatei << kopierendeDatei.rdbuf();

    cout << "Die Datei wurde erfolgreich kopiert.\n";
    return 0;
}