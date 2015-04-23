//LAB 3-8 - Get Date - Pete Wilcox - 4-22-2015
#include <iostream>
#include <string>
#include <cstring>

using namespace std;

void getDate(int*, int*, int*);
int convertDay(string);
int convertMonth(string);
int convertYear(string);

void main() {
	int day, month, year;

	getDate(&day, &month, &year);
	
	cout << endl << month << "/" << day << "/" << year<< endl;

	system("pause");
}

void getDate(int *dptr, int *mptr, int *yptr) {
	string input;
	cout << "Please enter a date in the format DD-MMM-YYYY: \n";
	cin >> input;

	string day = input.substr(0, 2);
	string month = input.substr(3, 3);
	string year = input.substr(7, 4);

	*dptr = convertDay(day);
	*mptr = convertMonth(month);
	*yptr = convertYear(year);
	
}

int convertDay(string day) {
    char dayChars[3];
	for (int i = 0; i<2; i++) {
        dayChars[i] = day.at(i);
	}	
    dayChars[2] = '\0';
	int dayNumber = atoi(dayChars);
	return dayNumber;
}

int convertMonth(string month){
	int monthNum;
	
	for (int i = 0; i < 3; i++) {
		char c = month.at(i);
		month.at(i) = toupper(c);
	}

    if(month == "JAN") {
        monthNum = 1;
	} else if (month == "FEB") {
        monthNum = 2;
	} else if (month == "MAR") {
		monthNum = 3;
    } else if (month == "APR") {
		monthNum = 4;
    } else if (month == "MAY") {
		monthNum = 5;
    } else if (month == "JUN") {
		monthNum = 6;
	} else if (month == "JUL") {
		monthNum = 7;
	} else if (month == "AUG") {
		monthNum = 8;
	} else if (month == "SEP") {
		monthNum = 9;
	} else if (month == "OCT") {
		monthNum = 10;
	} else if (month == "NOV") {
		monthNum = 11;
	} else if (month == "DEC") {
		monthNum = 12;
	}
	return monthNum;
}

int convertYear(string year) {
	char yearChars[5];
    for (int i = 0; i < 4; i++) {
        yearChars[i] = year.at(i);
	}
    yearChars[4] = '\0';
    int yearNumber = atoi(yearChars);
    return yearNumber;
}

/* OUTPUT:

Please enter a date in the format DD-MMM-YYYY:
23-Apr-2013

4/23/2013
Press any key to continue . . .

*/