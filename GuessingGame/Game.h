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

public:
		//constructor
	Game(int bagSize, int upperBound);

		//getters
	int correctGuesses(vector<int> guesses);

		//setters
	bool fillBag();

};


