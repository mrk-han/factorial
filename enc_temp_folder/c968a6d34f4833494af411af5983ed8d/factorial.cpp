// factorial.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int calcFactorial(int value);
int getValue();

int main()
{
	char answer;
	int value;
	do {
		value = getValue();
		cout << "factorial is " << calcFactorial(value) << endl;
		cout << "Again? y" << endl;
		cin >> answer;

	} while (answer == 'Y' || answer == 'y');
    return 0;
}

int calcFactorial(int value) {
	cout << "Calculating your factorial!!!" << endl;
	int factorial = 1;
	for (int i = value; i > 1; i--) {
		factorial *= i;
	}
	return factorial;
}

int getValue() {
	int value;
	cout << "please enter an integer " << endl;
	cin >> value;
	return value;
}

