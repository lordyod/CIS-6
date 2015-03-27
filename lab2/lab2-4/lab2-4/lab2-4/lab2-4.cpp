//LAB2-4 - Simple Squares - 2/23/2015 - Pete Wilcox
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

void main() {
	char	repeat = 'n';	//repeats if the user wants to
	string	input;			//user input
	int		consonant,		//number of consonants
			vowel;			//number of vowels
	do {
		input = "";			//refresh the input string
		consonant = 0;		//and the counters
		vowel = 0;
				
		cout << "Please enter a word: ";
		cin >> input;
		cout << endl << "You entered: " << input << endl; //sanity check
		system("pause");

		if (input != "") {
			for (int i = 0; i< (int) input.length(); i++) { //go through each letter in the string
				cout << input.at(i) << endl;				//spit out that letter
				if((input.at(i) == 'a')||					//if it's a vowel...
					(input.at(i) == 'e')||
					(input.at(i) == 'i')||
					(input.at(i) == 'o')||
					(input.at(i) == 'u')||
					(input.at(i) == 'A')||
					(input.at(i) == 'E')||
					(input.at(i) == 'I')||
					(input.at(i) == 'O')||
					(input.at(i) == 'U')) {
						vowel++;							//add one to the vowel counter, otherwise ...
				}
				else {
					consonant++;							//add one to consonants
				};
			};
		};
		cout << "Vowels: " << vowel << endl;				//print the totals
		cout << "Consonants: " << consonant << endl;
		system("pause");
		cout << "Would you like to try another word? Enter (y) or (Y) to repeat." << endl;  //repeat if desired
		cin >> repeat;
	} while((repeat == 'y')||(repeat == 'Y'));
};


/* OUTPUT:
Please enter a word: professor

You entered: professor
Press any key to continue . . .
p
r
o
f
e
s
s
o
r
Vowels: 3
Consonants: 6
Press any key to continue . . .
Would you like to try another word? Enter (y) or (Y) to repeat.
y
Please enter a word: alabama

You entered: alabama
Press any key to continue . . .
a
l
a
b
a
m
a
Vowels: 4
Consonants: 3
Press any key to continue . . .
Would you like to try another word? Enter (y) or (Y) to repeat.
y
Please enter a word:

happy

You entered: happy
Press any key to continue . . .
h
a
p
p
y
Vowels: 1
Consonants: 4
Press any key to continue . . .

*/