#pragma once
#include <vector>
#include "Utilities.h"
#include "GuessingBag.h"
using namespace std;

class Game
{
private:
	int bagSize;
	int upperBound;
	const int lowerBound = 1;
	GuessingBag guessingBag;
	vector<int> userGuesses;

public:
		//constructor
	Game(int bagSize, int upperBound);

		//getters
	int getCorrectGuesses();
	int getBagSize() const;
	int getUpperBound() const;

		//setters
	void fillBag();
	bool addGuess(const int guess);

};


