#include "GuessingBag.h"
using namespace std;
	
	//getters
int GuessingBag::getCurrentSize() const{
	return contents.size();
}

bool GuessingBag::isEmpty() const{
	return (contents.size() == 0);
}

int GuessingBag::getFrequencyOf(const int& item) const
{
	int frequency = 0;
	for (int bagItem : contents) {
		if (bagItem == item) { frequency++; }
	}
	return frequency;
}

bool GuessingBag::contains(const int& item) const
{
	for (int bagItem : contents) {
		if (bagItem == item) { return true; }
	}
	return false;
}

bool GuessingBag::add(const int& item){
	int bagSize = contents.size();
	contents.push_back(item);
	return (contents.size() == bagSize + 1);
}

bool GuessingBag::remove(const int& item)
{
	if (contains(item)) {
		for (int count = 0; count < contents.size(); count++) {
			if (contents[count] == item) {
				contents.erase(contents.begin() + count);
				return true;
			}
		}
	}
	return false;
}

void GuessingBag::clear(){
	contents.clear();
}

vector<int> GuessingBag::toVector() const
{
	return vector<int>();
}
