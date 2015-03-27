//LAB1F ALTERNATE - 2/9/2015 - Pete Wilcox
#include <iostream>

using namespace std;

int points;
char grade = 'Z';


void main() {
	cout << "Please enter the student's point total: ";
	cin >> points;
	cout << endl;
	while (grade == 'Z') {
		if(points>89) {
			grade = 'A';
		}
		else if(points>79) {
			grade = 'B';
		}
		else if(points>69) {
			grade = 'C';
		}
		else if(points>59) {
			grade = 'D';
		}
		else if(points>0) {
			grade = 'F';
		}
		else {
			cout << "Please enter a valid point total: ";
			cin >> points;
			cout << endl;
		}
	}


	switch(grade) {
	case 'A': cout << "Grade: A. Excellent.";
		break;
	case 'B': cout << "Grade: B. Very good.";
		break;
	case 'C': cout << "Grade: C. Good.";
		break;
	case 'D': cout << "Grade: D. Try harder next time.";
		break;
	case 'F': cout << "Grade: F. Try harder next time.";
		break;
	default: cout<< "Please enter the student's point total. You entered: " << points;
		break;
	}
	cout << endl;
	system("pause");
}

/*OUTPUT:

*/