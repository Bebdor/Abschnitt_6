#ifndef ABSCHNITT_6_MAIN_H
#define ABSCHNITT_6_MAIN_H

#include "iostream"
#include "fstream"
using namespace std;

/**
* @brief Function name: aufgabeZwei
*
* @details This function performs the task described in question two.
*          It does not take any parameters and does not return any value.
*          It is responsible for performing a specific task as described in the problem statement.
*
* @remark Ensure that the necessary input data is available before calling this function.
*         The function does not perform any input validation checks.
*
* @remark This function does not have any side effects, i.e., it does not modify any external variables or resources.
*
* @note This function assumes the availability of certain helper functions or libraries, if mentioned in the problem statement.
*
* @warning The implementation of this function should be done carefully to avoid any unintended issues.
*          Take into account the possible edge cases and handle them properly to ensure the correct functionality.
*
* @see [Optional]
*      If there are related functions or resources that should be referenced, provide the necessary links or details here.
*/

int aufgabeZwei();

class InvalidInputException : public exception {
public:
    const char * what() const throw() {
        return "Invalid input";
    }
};

#endif //ABSCHNITT_6_MAIN_H
