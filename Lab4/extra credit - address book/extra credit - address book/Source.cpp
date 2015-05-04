//Extra Credit Project - Address Book - Pete Wilcox - 4/24/2015
#include <iostream>
#include <string>

using namespace std;

class Phone {
	private:
	int area, exchange, number;
	public:
	void setPhone();
	void printPhone();
	string getPhone();
	Phone();
};

class Address {
	private:
	int building, apt, zip;
	string street, city, state;
	public:
	void setAddress();
	void printAddress();
	string getAddress();
	Address();
};

class Person {
	private:
	string fName, lName;
	int IDNum;
	Address addressHome, addressWork;
	Phone phoneHome, phoneWork, phoneCell;
	public:
	void setInfo();
	void setName();
	void setFName();
	void setLName();
	void setAddress();
	void setPhone();
	void printAddress();
	void printPhone();
	void printInfo();
	void deleteInfo();
	string getFullName();
	string getInfo();
	string getAddressHome();
	string getAddressWork();
	string getPhoneHome();
	string getPhoneWork();
	string getPhoneCell();
	Person();
};

class AddressBook {
	private:
	Person people[100];
	int total;
	public:
	void printPerson(int);
	void printTotal();
	void addPerson();
	void deletePerson();
	void searchPerson();
	void editPerson();
	void condenseBook(int);
	AddressBook();
};

char displayMenu();
void chooseMenu(char, AddressBook);

void main() {
	cout << "This program will store an address book.";
	int menu;
	AddressBook book;
	do {
		menu = displayMenu();
		if(menu == '0') {
			break;
		} else {
			chooseMenu(menu, &book);
		}
	} while(menu != '0');

	system("pause");
}

char displayMenu() {
	char choice = '\0';
	while((choice < '0') || (choice > '5')) {
		cout << endl << "Please select an option from below:";
		cout << endl << "0. Quit.";
		cout << endl << "1. Display address book.";
		cout << endl << "2. Add person to address book.";
		cout << endl << "3. Delete person from address book.";
		cout << endl << "4. Edit person in address book.";
		cout << endl << "5. Search address book.";
		cout << endl;
		cin >> choice;
	}
	return choice;
}

void chooseMenu(char choice, AddressBook *bookPtr) {
	switch(choice) {
	case '1':
		*bookPtr.printTotal();
		return;
	case '2':
		*bookPtr.addPerson();
		return;
	case '3':
		*bookPtr.deletePerson();
		return;
	case '4':
		*bookPtr.editPerson();
		return;
	case '5':
		*bookPtr.searchPerson();
		return;
	}
	return;
}

void AddressBook::printPerson(int ID) {
	string info = people[ID].getInfo();
	cout << endl << info << endl;
	return;
}

void AddressBook::printTotal() {
	for(int i = 0; i < total; i++) {
		printPerson(i);
	}
	return;
}

void AddressBook::addPerson() {
	if(total == 100) {
		cout << endl << "Address book full.";
		return;
	}
	total++;
	people[total].setInfo();
	return;
}

void AddressBook::deletePerson() {
	int deleteID;
	if(total == 0) {
		cout << endl << "There is nobody in the address book to delete!";
		return;
	}

	bool wrongID = true;
	while(wrongID == true) {
		cout << endl << "Please enter the ID number of the person you wish to delete: ";
		
		cin >> deleteID;

		if(deleteID > total) {
			cout << endl << "Invalid ID number. Please try again.";
		} else {
			wrongID == false;
		}
	}
	printPerson(deleteID);
	do {
		cout << endl << "Are you sure you wish to delete this entry?";
		cout << endl << "Enter 1 to delete, 2 to go back: ";
		int sure;
		cin sure;
		if(sure == 2) {
			return;
		}
	} while(sure != 1);

	condenseBook(deleteID);
	return;
}

void AddressBook::condenseBook(int empty) {
	for(int i = empty; i < total - 1; i++) {
		people[i] = people[i + 1];
	}
	total--;
}

