#include "GuessingBag.h"

using namespace std;

	//getters
template <typename T>
bool GuessingBag<T>::isFull() {
	if (contents.size() == bagSize) { return true; }
	return false;
}

template <typename T>
int GuessingBag<T>::correctGuesses(T* guesses) {
	int correct = 0;
	for ()
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
	if (element <= upperBound && !isfull()) {
		contents.push)back(element);
	}
	return false;
}

