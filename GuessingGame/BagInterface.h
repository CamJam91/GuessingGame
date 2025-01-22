#pragma once
#include <vector>
using namespace std;

template<class T>
class BagInterface
{
public:
	virtual int getCurrentSize() const = 0; //bag isn't mutated
	virtual bool isEmpty() const = 0;
	virtual bool add(const T& item) = 0; //argument isn't mutated
	virtual bool remove(const T& item) = 0;
	virtual void clear() = 0; //mutates bag
	virtual int getFrequencyOf(const T& item) const = 0;
	virtual bool contains(const T& item) const = 0;
	virtual vector<T> toVector() const = 0;
};
