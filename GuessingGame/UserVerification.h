#ifndef USERVERIFICATION_H
#define USERVERIFICATION_H
#include <string>
#include <iostream>
using namespace std;

int numberVerification(int, int, string);

char charVerification(char[], int, string);

string stringVerification(string*, int, string);

bool binaryChoice(string errorMessage);

bool containsString(string, string*, int);


#endif