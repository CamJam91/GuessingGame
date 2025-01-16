/*Cameron Murphy
CIS2207 N02
1/15/2025
A file for verifying user input. Takes a lower bound, upper bound and error message*/
#include "UserVerification.h"

int numberVerification(int lowerBound, int upperBound, string errorMessage) {
    int number;
    cin >> number;
    while (number < lowerBound || number > upperBound) {
        cout << errorMessage; //number is not in range
        cin >> number;
    }

    return number;
}