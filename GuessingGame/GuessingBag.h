/* Cameron Murphy
CIS2207 N02
1 / 15 / 2025
Generic Guessing bag that inherits the bag calss */
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
	int correctGuesses(T*);
		//setters
	bool add(T) override;
	void setSize(int);
	void setUpperBound(int);

};
#endif