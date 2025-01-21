#include "GuessingBag.h"

using namespace std;

	//getters
template <typename T>
bool GuessingBag<T>::isFull() {
	if (this->contents.size() == bagSize) { return true; }
	return false;
}

//tests how many guesses are correct
template <typename T>
int GuessingBag<T>::correctGuesses(T* guesses) {
	int correct = 0;
	for (int guess = 0; guess < this->contents.size();guess++) {
		bool found = false;
		for (int count = 0; count < this->contents.size() || !found; count++) {
			if (guesses[guess] == this->contents[count]) {
				correct++;
				found = true; //stop loop
				this->contents.erase(this->contents.begin() + count);//erase element in case there are duplicates
			}
		}
	}
	return correct;
}
	//add
template <typename T>
void GuessingBag<T>::setSize(int bagSize) {
	this->bagSize = bagSize;
}

template <typename T>
void GuessingBag<T>::setUpperBound(int upperBound) {
	this->upperBound = upperBound;
}

//make sure element is lower than upper bound and the bag is not full
template <typename T>
bool GuessingBag<T>::add(T element) {
	if (element <= upperBound && !this->isFull()) {
		this->contents.push_back(element);
	}
	return false;
}

