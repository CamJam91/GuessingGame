#ifndef BAG_H
#define BAG_H
#include<Vector>
using namespace std;
template <typename T>
class Bag {
protected:
	vector<T> contents;
public:
		//getters
	virtual int getCurrentSize();
	virtual int getFrequencyOf(T);
	virtual bool isEmpty();
	virtual bool contains(T);
	virtual vector<T> toVector();

		//setters
	virtual bool add(T);
	virtual bool remove(T);
	virtual void clear();
};

#endif