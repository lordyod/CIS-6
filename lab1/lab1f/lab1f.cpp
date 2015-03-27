//LAB1F - GRADES - Pete Wilcox - 2/4/2015
#include <iostream>

using namespace std;

int points; //points earned

void main() {
	cout << "This program will determine your grade. Please enter the points earned: ";
	cin >> points;
	cout << endl;

	if(points>=90) {
		cout << "Grade: A. Excellent." << endl;
	}
	else if(points>=80) {
		cout << "Grade: B. Very good." << endl;
	}
	else if(points>=70) {
		cout << "Grade: C. Good." << endl;
	}
	else if(points>=60) {
		cout << "Grade: D. Try Harder Next Time." << endl;
	}
	else {
		cout << "Grade: F. Try Harder Next Time." << endl;
	}

	system("pause");
}

/*OUTPUT:

This program will determine your grade. Please enter the points earned: 95

Grade: A. Excellent.
Press any key to continue . . .

This program will determine your grade. Please enter the points earned: 85

Grade: B. Very good.
Press any key to continue . . .

This program will determine your grade. Please enter the points earned: 75

Grade: C. Good.
Press any key to continue . . .

This program will determine your grade. Please enter the points earned: 65

Grade: D. Try Harder Next Time.
Press any key to continue . . .

This program will determine your grade. Please enter the points earned: 55

Grade: F. Try Harder Next Time.
Press any key to continue . . .
*/
