//Lab 4 Project - Game of Life - Pete Wilcox - 4-23-2015

#include <iostream>

using namespace std;

void main() {
	int size, genCurrent, genMax;

	cout << "The Game of Life";
	cout << endl << "Please enter the board size: ";
	cin >> size;
	cout << endl << "Please enter the number of generations: ";
	cin >> genMax;

	bool *board = nullptr;
	

	