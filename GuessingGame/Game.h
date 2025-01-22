#pragma once
#include <vector>
using namespace std;

class Game
{
private:
	int bagSize;
	int upperBound;
	const int lowerBound = 1;

public:
	Game(int bagSize, int upperBound);
	bool winner();
	int correctGuesses(vector<int> guesses);
};

