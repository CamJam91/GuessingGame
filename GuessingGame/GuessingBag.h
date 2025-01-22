#pragma once
#include "BagInterface.h"
#include "vector"
using namespace std;

class GuessingBag : BagInterface<int> {
private:
	vector<int> contents;

public:
		//getters
	int getCurrentSize() const;
	bool isEmpty() const;
	int getFrequencyOf(const int& item) const;
	bool contains(const int& item) const;

		//setters
	bool add(const int& item);
	bool remove(const int& item);
	void clear();

	vector<int> toVector() const;
};
