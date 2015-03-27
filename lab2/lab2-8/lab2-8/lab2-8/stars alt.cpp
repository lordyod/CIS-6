//stars alt

#include <iostream>
#include <cmath>

using namespace std;

void main() {
	int n; //user input

	cout << "enter n: ";
	cin >> n;
	cout << endl;

	for (int i=0;i<12;i++) {
		int j=(i<12-i)?i:12-i;
		for (int k=0;k<(pow(2,j));k++) {
			cout << "*";
		}
		cout << endl;
	}
	system("pause");
}
