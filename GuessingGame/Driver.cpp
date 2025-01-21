/*Cameron Murphy
CIS2207 N02
1/15/2025
Program Driver*/
#include <iostream>
#include "UserVerification.h"
#include "GuessingBag.h"
#include "Utilities.h"
#include <cstdio>

using namespace std;

void menu();
void fillBag(GuessingBag<int>&, int, int);

int main() {
    menu();
}

void menu() {
    GuessingBag<int> guessingBag;
    string userString = "N";
    int bagSize;
    int bagUpperBound;
    int* userGuesses; //create pointer to later store guess array
    int correctGuesses;
    string allowedStrings[] = { "Y", "y", "Yes", "YES", "yes", "N", "n", "No", "NO", "no" };
    string negativeStrings[] = { "N", "n", "No", "NO", "no" };

    //prompt user then get the bag size and upper bound from user
    printf("Welcome to the random bag guessing game. Choose the size of your Guessing bag.\n>>");
    bagSize = numberVerification(1, 100, "Please choose a number between 1 and 100\n>>");

    printf("What is the highest number your bag is able to contain?\n>>");
    bagUpperBound = numberVerification(2, 1000, "Please choose a number between 2 and 1000\n>>");
    userGuesses = new int[bagSize]; //create array to hold user guesses equal to the bagsize

    //fill the bag
    fillBag(guessingBag, bagSize, bagUpperBound);

    do {
        printf("Guess %d numbers from 1 to %d\n>>", bagSize, bagUpperBound);
        for (int count = 0; count < bagSize; count++) {
           userGuesses[count] = numberVerification(1, bagUpperBound,"Your guess should be between 1 and %d\n>>"); //create string to use as argument
        }
        
        correctGuesses = guessingBag.correctGuesses(userGuesses);
        
        if (correctGuesses = bagSize) {
            printf("Congratulations, you win! Play again?\nY or N?>>");
            userString = stringVerification(allowedStrings, allowedStrings->size(), "Play again?\n>>");
        }
        else {
            printf("You got %d numbers correct\n", correctGuesses);
        }
    } while(correctGuesses != bagSize);
}

void fillBag(GuessingBag<int>& guessingBag, int bagSize, int upperBound) {
    vector<int> randoms = getRandoms(bagSize, 1, upperBound);
    for (int random : randoms) {
        guessingBag.add(random);
    }
}