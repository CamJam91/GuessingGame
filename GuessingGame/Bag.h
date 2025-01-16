#ifndef BAG_H
#define BAG_H
template <typename T>
class Bag {
private:
	T contents[];

public:
		//getters
	int getCurrentSize();
	int getFrequencyOf(T);
	bool isEmpty();
	bool isFull();
	bool contains(T);

		//setters
	bool add(T);
	bool remove(T);
	void clear();
};

#endif