//LAB 3-6 - Reverse - Pete Wilcox - 4/13/2015
#include <iostream>

using namespace std;

void reverse(int);

void main() {
	int input = 0;
	char repeat = 'y';

	do {
		int output = 0;
		cout << "This program will reverse the number input.\nPlease input a number.\n";
		cin >> input;
		cout << endl;
		reverse(input);
		cout << "\nWould you like to reverse another number? Enter y or Y to repeat.\n";
		cin >> repeat;
		cout << endl;
	} while ((repeat == 'y') || (repeat == 'Y'));
}

void reverse(int input) {
	if(input>0) {
		cout << input%10;
		reverse(input/10);
	}
	return;
}

/* OUTPUT:
This program will reverse the number input.
Please input a number.
546465

564645
Would you like to reverse another number? Enter y or Y to repeat.
y

This program will reverse the number input.
Please input a number.
123456

654321
Would you like to reverse another number? Enter y or Y to repeat.



*/