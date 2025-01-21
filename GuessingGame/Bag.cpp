#include "Bag.h"

//getters
template <typename T>
int Bag<T>::getCurrentSize() {
	return contents.size();
}

//Checks the entire bag to see how many times the argument appears
template <typename T>
int Bag<T>::getFrequencyOf(T target) {
	int frequency = 0;
	for (T t: contents) {
		if (t == target) { frequency++; }
	}
	return frequency;
}

template <typename T>
bool Bag<T>::isEmpty() {
	if (contents.empty()) { return true; }
	return false;
}


//If any occurence of t exists, return true
template <typename T>
bool Bag<T>::contains(T target) {
	for (T t : contents) {
		if (t == target) { return true; }
	}
	return false;
}

	//Setters
template <typename T>
bool Bag<T>::add(T add) {
	int size = contents.size();
	contents.push_back(add);

	int newSize = contents.size();
	if (newSize == size + 1) { return true; } //check if contents size has increased
	return false; //an error has occured and element was not added
}

template <typename T>
bool Bag<T>::remove(T target) {
	for (int count = 0; count < contents.size(); count++) {
		if (contents[count] == target) {
			contents.erase(contents.begin() + count);
			return true;
		}
	}
	return false; //element does not exists
}

template <typename T>
void Bag<T>::clear() {
	contents.clear();
}

template <typename T>
vector<T> Bag<T>::toVector() {
	return contents;
}
