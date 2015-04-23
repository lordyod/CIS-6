//LAB 3-7 - Name Sort - Pete Wilcox 4/20/2015
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

void nameInput(string[]);
void nameSort(string[]);
void nameList(string[]);

void main() {
	string names[20] = {""};
	cout << "This program will accept a list of names as input and then sort them into alphabetical order." << endl;

	nameInput(names);
	nameSort(names);
	nameList(names);

	system("pause");
}

void nameInput(string names[]) {
	cout << "Please enter the list of names now:";
	for (int i = 0; i < 20; i++) {
		cout << endl << i + 1 << ": ";
		getline(cin, names[i]);
	}
	return;
}

void nameList(string names[]) {
	for (int i = 0; i < 20; i++) {
		cout << endl << names[i] << endl;
	}
	return;
}

void nameSort(string names[]) {
	for (int i = 0; i < 19; i++) {
		int minIndex = i;
		string minValue = names[i];
		for (int j = minIndex + 1; j < 20; j++) {
			if(names[j] < minValue) {
				minIndex = j;
				minValue = names[j];
			}
		}
		string temp = names[i];
		names[i] = names[minIndex];
		names[minIndex] = temp;
	}
	return;
}
