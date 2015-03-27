//Lab 2-5 - Fibonacci Sequence - 2/25/2015 - Pete Wilcox
#include <iostream>

using namespace std;

void main() {
	int		n,			//user input
			fA,			//Tracking the numbers in the sequence
			fB,
			fC;
	char	repeat;		//to repeat the do-while
	do {
		repeat = 'n';
		n = 1;			//initialize stuff
		fA = 0;
		fB = 1;

		
		cout << endl << "This program will calculate the nth number of the Fibonacci sequence.";
		do {
			cout << endl << "Please input n: ";
			cin >> n;
			if (n<1) {
				cout << endl << "Invalid entry. Please enter a number greater than 0.";  //no point in trying with <0
			};
		} while (n<1); //repeat input sequence until valid entry
		
		for (int i = 0; i<n; i++) { //repeat loop n times
			if(i>=2) { //start tracking numbers at i=2
				fC = fA + fB; //F(current) = F(current-1)+F(current-2)
				fA = fB; //New F(current-2) = F(current-1)
				fB = fC; //New F(current-1) = F(current)
				cout << fC << " "; //spit out the number
			}
			else {
				cout << i << " "; //for F(1) and F(2) just print 0 1
			};
		
		};
		cout << endl;
		system("pause");
		cout << endl << "Would you like to enter a new number? Enter (y) or (Y) to repeat." << endl; //repeat as desired
		cin >> repeat;
	} while((repeat=='y')||(repeat=='Y'));
	system("pause");
}

/* OUTPUT:

This program will calculate the nth number of the Fibonacci sequence.
Please input n: 20
0 1 1 2 3 5 8 13 21 34 55 89 144 233 377 610 987 1597 2584 4181
Press any key to continue . . .

Would you like to enter a new number? Enter (y) or (Y) to repeat.
y

This program will calculate the nth number of the Fibonacci sequence.
Please input n: 25
0 1 1 2 3 5 8 13 21 34 55 89 144 233 377 610 987 1597 2584 4181 6765 10946 17711
 28657 46368
Press any key to continue . . .

Would you like to enter a new number? Enter (y) or (Y) to repeat.

*/
