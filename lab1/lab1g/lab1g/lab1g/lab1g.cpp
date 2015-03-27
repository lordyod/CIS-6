//LAB1G - Phonebook Reference - 2/9/2015 - Pete Wilcox
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

string	inputFirst,	//These variables are for user input
		inputLast,
		pbFirst,	//These hold the names referenced in the phonebook files
		pbLast,
		pbPhone;	//This is the phone number we're looking for

void main() {
	cout << "This program will accept a name from the user \n and look up the corresponding phone number in \nthe phone book. Please enter the person's first\nname: ";
	cin >> inputFirst;
	cout << endl << "Last name: ";
	cin >> inputLast;
	cout << "Thank you. Now looking up " << inputFirst << " " << inputLast << " in the phone book." << endl << endl;

	for(size_t i=0; i<str.length(); ++i) {
