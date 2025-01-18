#ifndef GUESSINGBAG_H
#define GUESSINGBAG_H
#include "Bag.cpp"
using namespace std;

template <typename T>
class GuessingBag : public Bag<T> {
private:
	int bagSize;
	int upperBound;

public:
		//getters
	bool isFull();
	int correctGuesses(T[]);

		//setters
	bool add(T) overrride;
	void setSize(int);
	void setUpperBound(int);

};
#endif