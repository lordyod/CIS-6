//LAB3-3 - Palindrome - Pete Wilcox - 3/23/2015
#include <iostream>
#include <string>

using namespace std;

bool isPalindrome(string);

void main() {
	char repeat = 'y';
	while ((repeat == 'y')||(repeat == 'Y')) {
		string input;
		cout << "Input word: ";
		cin >> input;
		cout << endl;
	
		if(isPalindrome(input) == true) {
			cout << input << " is a palindrome." << endl;
		} else {
			cout << input << " is not a palindrome." << endl;
		}
		cout << "Would you like to repeat? Enter y or Y to repeat." << endl;
		cin >> repeat;
	}
	system("pause");
}

bool isPalindrome(string testWord) {
	int size = (int)(testWord.length());
	if(size<2) { //If there are fewer than 2 letters in the string it's obviously a palindrome
		return true;
	}
	cout << testWord.front() << " - " << testWord.back() << endl;
	system("pause");
	if(testWord.front() == testWord.back()) { //Checks first letter vs last letter
		string output = testWord.substr(1, size-2); //Chop off first and last character, make a new string
		cout << output << endl;
		system("pause");
		if(isPalindrome(output) == true) { //Call this function with the new string
			return true;
		} else { //Return pathing
			return false;
		}
	} else {
		return false;
	}
}

/*OUTPUT:

Input word: madam

m - m
Press any key to continue . . .
ada
Press any key to continue . . .
a - a
Press any key to continue . . .
d
Press any key to continue . . .
madam is a palindrome.
Would you like to repeat? Enter y or Y to repeat.
y
Input word: polyp

p - p
Press any key to continue . . .
oly
Press any key to continue . . .
o - y
Press any key to continue . . .
polyp is not a palindrome.
Would you like to repeat? Enter y or Y to repeat.
n
Press any key to continue . . . */