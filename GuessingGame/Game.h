#pragma once
#include <vector>
#include "GuessingBag.h"
using namespace std;

class Game
{
private:
	int bagSize = 0;
	int upperBound = 0;
	const int LOWER_BOUND = 1;
	GuessingBag guessingBag;

public:
	Game(int bagSize, int upperBound);
	int correctGuesses(vector<int> guesses);
};


