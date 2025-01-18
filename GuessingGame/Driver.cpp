/*Cameron Murphy
CIS2207 N02
1/15/2025
Program Driver*/
#include <iostream>
#include "UserVerification.h"
#include <cstdio>

using namespace std;

void menu();

int main() {
    menu();
}

void menu() {
    int userChoice;
    int bagSize;
    int bagUpperBound;
    int* userGuesses; //create pointer to later store guess array
    char guessError[100];

    //prompt user then get the bag size and upper bound from user
    printf("Welcome to the random bag guessing game. Choose the size of your Guessing bag.\n>>");
    bagSize = numberVerification(1, 100, "Please choose a number between 1 and 100\n>>");

    printf("What is the highest number your bag is able to contain?\n>>");
    bagUpperBound = numberVerification(2, 1000, "Please choose a number between 2 and 1000\n>>");
    userGuesses = new int[bagSize]; //create array to hold user guesses equal to the bagsize

    do {
        printf("Guess %d numbers from 1 to %d\n>>", bagSize, bagUpperBound);
        sprintf_s(guessError, "Your guess should be between 1 and %d\n>>", bagUpperBound); //create string to use as argument

        for (int count = 0; count < bagSize; count++) {
            printf("\n>>");
            userGuesses[count] = numberVerification(1, bagUpperBound, guessError);
        }

        for (int count = 0; count < bagSize; count++) {
           if (bag.contains(userGuesses[count]))
               correctGuesses++ 
        }
        if (correctGuesses = bagSize)
            print you win
        else 
            print correctGuesses
        
    } while(correctGuesses < bagSize);
}