//Lab 4-2 - Person Class - Pete Wilcox - 4-23-2015
#include <iostream>
#include <string>

using namespace std;

class Person {
	private:
	string fName;
	string lName;
	int numID;
	public:
	Person();
	string getFullName();
	string getLastName();
	string getFirstName();
	int getID();
	void setFirstName();
	void setLastName();
	void setIDNum();
};



void main() {
	int menu;
	Person person;

	cout << endl << "This program will manipulate a personal ID class.";

	do {
		cout << endl << "Please select an option from below:";
		cout << endl << "1. View personal information.";
		cout << endl << "2. Enter first name.";
		cout << endl << "3. Enter last name. ";
		cout << endl << "4. Enter ID number.";
		cout << endl << "5. Quit.";
		cout << endl;
		cin >> menu;

		if((menu < 1) || (menu>5)) {
			cout << endl << "Invalid selection, please choose again.";
		} else if(menu == 5) {
			break;
		} else if(menu == 1) {
			cout << endl << "First name: " << person.getFirstName();
			cout << endl << "Last name: " << person.getLastName();
			cout << endl << "ID Number: " << person.getID();
		} else if(menu == 2) {
			person.setFirstName();
		} else if(menu == 3) {
			person.setLastName();
		} else if(menu == 4) {
			person.setIDNum();
		}
	} while(menu != 5);
	system("pause");
}

string Person::getLastName() {
	return lName;
}

string Person::getFirstName() {
	return fName;
}

string Person::getFullName() {
	string fullName = fName;
	fullName.append(1, ' ');
	fullName.append(lName);
	return fullName;
}

int Person::getID() {
	return numID;
}

void Person::setFirstName() {
	string input;
	cout << endl << "Please enter the person's first name: ";
	cin >> input;
	cout << endl << "You entered " << input;
	fName = input;
	return;
}

void Person::setLastName() {
	string input;
	cout << endl << "Please enter the person's last name: ";
	cin >> input;
	cout << endl << "You entered " << input;
	lName = input;
	return;
}

void Person::setIDNum() {
	int input;
	cout << endl << "Please enter the person's ID number: ";
	cin >> input;
	cout << endl << "You entered: " << input;
	numID = input;
	return;
}

Person::Person() {
	fName = "John";
	lName = "Doe";
	numID = 12345;
	return;
}

/* OUTPUT:


This program will manipulate a personal ID class.
Please select an option from below:
1. View personal information.
2. Enter first name.
3. Enter last name.
4. Enter ID number.
5. Quit.
1

First name: John
Last name: Doe
ID Number: 12345
Please select an option from below:
1. View personal information.
2. Enter first name.
3. Enter last name.
4. Enter ID number.
5. Quit.
2

Please enter the person's first name: Bill

You entered Bill
Please select an option from below:
1. View personal information.
2. Enter first name.
3. Enter last name.
4. Enter ID number.
5. Quit.
3

Please enter the person's last name: Jones

You entered Jones
Please select an option from below:
1. View personal information.
2. Enter first name.
3. Enter last name.
4. Enter ID number.
5. Quit.
4

Please enter the person's ID number: 987654321

You entered: 987654321
Please select an option from below:
1. View personal information.
2. Enter first name.
3. Enter last name.
4. Enter ID number.
5. Quit.
1

First name: Bill
Last name: Jones
ID Number: 987654321
Please select an option from below:
1. View personal information.
2. Enter first name.
3. Enter last name.
4. Enter ID number.
5. Quit.
5
Press any key to continue . . .

*/