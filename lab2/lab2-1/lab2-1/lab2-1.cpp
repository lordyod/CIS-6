//LAB2-1 - Multiplication - 2/11/2015 - Pete Wilcox
#include <iostream>

using namespace std;

void main() {
	//Two integers for multiplying
	int num1 = 0,
		num2 = 0,
		num3 = 0,  //output
		count = 0; //this one is for the for loop

	cout << "Input number 1: ";
	cin >> num1;
	cout << endl << "Input number 2: ";
	cin >> num2;

	//Error checking
	cout << endl << "Number 1: " << num1;
	cout << endl << "Number 2: " << num2 << endl;

	system("pause");

	//Use if cases to check for different exceptions, first case checks to see if either number is 0, second checks to see both are positive,
	//third checks for one positive one negative - use an if/else to correctly set the loop conditions. 
	if((num1==0)||(num2==0)) { //if either number is 0, result will be 0
		num3 = 0;
	}
	else if((num1>0)&&(num2>0)) { //both numbers positive
		for(count = 0; count < num2; count++) {
			num3 += num1;
		}
	}
	else if((num1<0)&&(num2<0)) { //both numbers negative
		for(count = 0; count > num2; count--) {
			num3 -= num1;
		}
	}
	else { //one positive, one negative
		if(num1>num2) {
			for(count = 0; count > num2; count--) {
				num3 -= num1;
			}
		}
		else {
			for(count = 0; count > num1; count--) {
				num3 -= num2;
			}
		}
	}

	cout << num1 << " * " << num2 << " = " << num3 << endl;
	
	system("pause");
}

/* OUTPUT:

Input number 1: 15

Input number 2: -3

Number 1: 15
Number 2: -3
Press any key to continue . . .
15 * -3 = -45
Press any key to continue . . .

Input number 1: 15

Input number 2: 5

Number 1: 15
Number 2: 5
Press any key to continue . . .
15 * 5 = 75
Press any key to continue . . .

Input number 1: -2

Input number 2: -2

Number 1: -2
Number 2: -2
Press any key to continue . . .
-2 * -2 = 4
Press any key to continue . . .

Input number 1: 2

Input number 2: 0

Number 1: 2
Number 2: 0
Press any key to continue . . .
2 * 0 = 0
Press any key to continue . . .

*/