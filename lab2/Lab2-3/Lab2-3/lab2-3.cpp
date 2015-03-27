//LAB2-3 - Stars - 2/18/2015 - Pete Wilcox

#include <iostream>
#include <cmath>

using namespace std;

int n = 0; //user input for 2^n

void star() { //print a star
    cout << "*";
}


void main() {
    do {
		n = 0;
		cout << "Input n: ";
		cin >> n;
		cout << endl << "n = " << n << endl;

	    if (n>0) {
			for(int y=0;y<=n;y++) { //counting up in exponents
			    for(int z=1;z<=(pow(2,y));z++) { //prints each line
			        star();
				}
			    cout << endl;
			}
			for(int y=n-1;y>=0;y--) { //counting down
			    for(int z=1;z<=(pow(2,y));z++) {
			        star();
				}
			    cout << endl;
			}
		}
		else {
			n = 0;
			cout << "Please enter a number greater than 0." << endl;
		}
	} while (n < 1);
    system("pause");
}

/*OUTPUT:
Input n: -3

n = -3
Please enter a number greater than 0.
Input n: 5

n = 5
*
**
****
********
****************
********************************
****************
********
****
**
*
Press any key to continue . . .
*/