#include "Game.h"
#include "GuessingBag.h"

	//constructors
Game::Game(int bagSize, int upperBound)
{
	this->bagSize = bagSize;
	this->upperBound = upperBound;
}


//getters
int Game::getBagSize() const{
	return bagSize;
}

int Game::getUpperBound() const {
	return upperBound;
}

	//Vector is copies since it needs to be mutated for function to give proper results
int Game::correctGuesses(vector<int> guesses)
{
	int correctGuesses = 0;
	vector<int> compares = guessingBag.toVector();

	for (int guessCount = 0; guessCount < bagSize; guessCount++) {
		bool found = false;
		for (int count = 0; count < bagSize || !found; count++) {
			if (guesses[guessCount] == compares[count]) {
				correctGuesses++;
				compares.erase(compares.begin() + count); //delete correct guess
			}
		}
	}
	return correctGuesses;
}

bool Game::fillBag()
{	
	bool success = false;
	if (bagSize == 0 || upperBound == 0) { return success; }
	vector<int> randoms = getRandoms(bagSize, 1, upperBound);
	for (int count = 0; count < bagSize; count++) { //fill ther bag with the elements of our vector
		success = guessingBag.add(randoms.at(count));
	}
	return success;
}

