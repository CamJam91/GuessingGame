#include "Game.h"
#include "GuessingBag.h"

Game::Game(int bagSize, int upperBound)
{
	this->bagSize = bagSize;
	this->upperBound = upperBound;
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

