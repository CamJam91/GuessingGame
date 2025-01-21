#include "Utilities.h"

vector<int> getRandoms(int size, int lowerBound, int upperBound){
	vector<int> randoms;
	int random;
	random_device randomDevice;
	mt19937 gen(randomDevice());
	uniform_int_distribution<> dis(lowerBound, upperBound);

	for (int count = 0; count < size; count++) {
		random = dis(gen);
		randoms.push_back(random);
	}
	return randoms;
}