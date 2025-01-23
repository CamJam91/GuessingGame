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

void promptUser(int&, int&);
void play(Game);

int main() {
	Game* game;
	int bagSize;
	int bagUpperBound;
	printf("Welcome to the Guessing Bag game\n");
	
	do {
		promptUser(bagSize, bagUpperBound);
		game = new Game(bagSize, bagUpperBound);
		if (!game->fillBag()) {
			printf("There was a problem creating your bag...exiting\n");
			return 1;
		}

		play(*game);
	} while (true);
	return 0;
}

void promptUser(int& bagSize, int& bagUpperBound) {
	printf(" Choose the size of your Guessing bag.\n>>");
	bagSize = numberVerification(1, 100, "Please choose a number between 1 and 100\n>>");
	
	printf("What is the highest number your bag is able to contain?\n>>");
	bagUpperBound = numberVerification(2, 1000, "Please choose a number between 2 and 1000\n>>");
}

void play(Game game) {
	vector<int> userGuesses;
	int userNumber;
	ostringstream ostringstream;
	ostringstream << "Please enter a number from 1 to " << game.getUpperBound() << "\n>>";;
	string errorMessage = ostringstream.str();


	printf("Choose %d numbers from 1 - %d\n>>", game.getBagSize(), game.getUpperBound());
	for (int count = 0; count < game.getBagSize(); count++) {
		userNumber = numberVerification(1, game.getUpperBound(), errorMessage);
		printf(">>");
	}

}

