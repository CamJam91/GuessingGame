#include "Game.h"
#include "GuessingBag.h"

	//constructors
Game::Game(int bagSize, int upperBound)
{
	this->bagSize = bagSize;
	this->upperBound = upperBound;
	fillBag();
}


//getters
int Game::getBagSize() const{
	return bagSize;
}

int Game::getUpperBound() const {
	return upperBound;
}

	//Vector is copies since it needs to be mutated for function to give proper results
int Game::getCorrectGuesses(){
	int correctGuesses = 0;
	vector<int> compares;
	compares = guessingBag.toVector();

	for (int guessCount = 0; guessCount < bagSize; guessCount++) {
		bool found = false;
		for (int count = 0; count < compares.size() && !found; count++) {
			if (userGuesses[guessCount] == compares[count]) {
				correctGuesses++;
				compares.erase(compares.begin() + count); //delete correct guess from the bag vector copy
				found = true;
			}
		}
	}
	userGuesses.clear(); //clear the userguesses vector so it can be filled again
	return correctGuesses;
}

	//setters
void Game::fillBag(){	
	if (bagSize != 0 && upperBound != 0) { 
	vector<int> randoms = getRandoms(bagSize, 1, upperBound);
		for (int count = 0; count < bagSize; count++) { //fill the bag with the elements of our vector
			guessingBag.add(randoms.at(count));
		}
	}
}

bool Game::addGuess(const int guess) {
	if (guess > upperBound || userGuesses.size() == bagSize) {
		return false;
	}
	userGuesses.push_back(guess);
	return true;
}

