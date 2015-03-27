//LAB 3-1 - Stars - Pete Wilcox - 3/23/2015
#include <iostream>

using namespace std;

void printStars(int);

void main() {
	printStars(1);
	printStars(2);
	printStars(4);
	printStars(8);
	printStars(16);
	printStars(32);
	printStars(64);
	system("pause");
}

void printStars(int n) {
	if(n == 0) {
		cout << endl;
		return;
	} else {
		cout << "*";
		n--;
		printStars(n); //This is a recursive loop. Each loop counts down, when it hits 0 it returns through each function call to main()
	}
}

/*OUTPUT:
*
**
****
********
****************
********************************
****************************************************************
Press any key to continue . . .
*/