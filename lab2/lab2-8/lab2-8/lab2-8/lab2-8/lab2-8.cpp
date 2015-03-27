//LAB 2-8 - Square Roots - 3/11/2015 - Pete Wilcox
#include <iostream>
#include <iomanip>

using namespace std;

double squirt(double);

void main() {
	double num, output;
	char repeat = 'n';
	do {
		
		
		cout << "This program will compute the square root of a number to within 0.00001. Please input a number greater than zero: ";
		do {
			cin >> num;
			if(num<=0) {
				cout << endl << "Invalid entry. Please enter a number greater than zero: ";
			}
		} while(num<=0);

		output=squirt(num);

		cout << fixed << "The square root of " << num << setprecision(5) << " is " << output << "." << endl;
		cout << "Would you like to repeat? Enter (y) or (Y) to repeat." << endl;
		cin >> repeat;
	} while ((repeat=='y')||(repeat=='Y'));
}


double squirt(double input) {
	double nextGuess, lastGuess = 1.0;
	bool found = false;
	cout << endl << "Calculating square root of " << input << endl;
	
	while(found==false) {
		cout << "Next guess: " << 0.5*(lastGuess+(input/lastGuess)) << endl;
		nextGuess=0.5*(lastGuess+(input/lastGuess));
		if((abs)(nextGuess-lastGuess)<0.00001) {
			found=true;
		} else {
			lastGuess=nextGuess;
		}
	}
	return(nextGuess);
}
		
/* OUTPUT:
This program will compute the square root of a number to within 0.00001. Please
input a number greater than zero: 25

Calculating square root of 25
Next guess: 13
Next guess: 7.46154
Next guess: 5.40603
Next guess: 5.01525
Next guess: 5.00002
Next guess: 5
Next guess: 5
The square root of 25.000000 is 5.00000.
Would you like to repeat? Enter (y) or (Y) to repeat.
y
This program will compute the square root of a number to within 0.00001. Please
input a number greater than zero: 1125

Calculating square root of 1125.00000
Next guess: 563.00000
Next guess: 282.49911
Next guess: 143.24071
Next guess: 75.54731
Next guess: 45.21932
Next guess: 35.04903
Next guess: 33.57346
Next guess: 33.54104
Next guess: 33.54102
Next guess: 33.54102
The square root of 1125.00000 is 33.54102.
Would you like to repeat? Enter (y) or (Y) to repeat.
y
This program will compute the square root of a number to within 0.00001. Please
input a number greater than zero: 17

Calculating square root of 17.00000
Next guess: 9.00000
Next guess: 5.44444
Next guess: 4.28345
Next guess: 4.12611
Next guess: 4.12311
Next guess: 4.12311
The square root of 17.00000 is 4.12311.
Would you like to repeat? Enter (y) or (Y) to repeat.
*/