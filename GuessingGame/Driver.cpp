/*Cameron Murphy
CIS2207 N02
1/15/2025
Program Driver*/
#include <iostream>
#include <string>
#include <sstream>
#include "UserVerification.h"
#include "GuessingBag.h"
#include "Utilities.h"
#include "Game.h"
using namespace std;

static void promptUser(int&, int&);
static bool getGuesses(Game*);
int play(Game);

int main() {
	Game* game;
	int bagSize;
	int bagUpperBound;
	int correctGuesses = 0;
	bool userChoice;

	printf("Welcome to the Guessing Bag game\n");
	do {
			//prompt user for bagsize and bound, construct game and make sure there was not an issue
		promptUser(bagSize, bagUpperBound);
		game = new Game(bagSize, bagUpperBound);
		if (game->getBagSize() == 0) {
			printf("There was a problem creating your bag...exiting\n");
			return 1;
		}

			//check if winner
		do {
			bool succeeded = getGuesses(game);
			if (!succeeded) {
				printf("There was a problem while getting guesses...exiting");
				return 1;
			}
			correctGuesses = game->getCorrectGuesses();
			if (correctGuesses == bagSize) {
				printf("Congratulations, you win! PLay again?\n>>");
				userChoice = binaryChoice("Play again?\n>>");
			}
			else {
				printf("You got %d out of %d correct, try again\n>>", correctGuesses, bagSize);
			}
		} while (correctGuesses != bagSize);
	} while (userChoice);
	return 0;
}
	//Fix: use the new user verification methods
static void promptUser(int& bagSize, int& bagUpperBound) {
	printf(" Choose the size of your Guessing bag.\n>>");
	bagSize = numberVerification(1, 100, "Please choose a number between 1 and 100\n>>");
	
	printf("What is the highest number your bag is able to contain?\n>>");
	bagUpperBound = numberVerification(2, 1000, "Please choose a number between 2 and 1000\n>>");
}

	//prompt user and get guesses
static bool getGuesses(Game* game) {
	int guess;
	bool succeeded = true;
	ostringstream ostringstream;
	ostringstream << "Please enter a number from 1 to " << game->getUpperBound() << "\n>>";
	string errorMessage = ostringstream.str();

	printf("Choose %d numbers from 1 - %d\n>>", game->getBagSize(), game->getUpperBound());
	for (int count = 0; count < game->getBagSize(); count++) {
		guess = numberVerification(1, game->getUpperBound(), errorMessage);
		succeeded = game->addGuess(guess); //add guess to our game
		if (!succeeded) {
			return succeeded;
		}
	}
	return succeeded;
}

