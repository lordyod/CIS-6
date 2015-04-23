//Lab 3-5 - Fibonacci Number - 4-8-2015 - Pete Wilcox
#include <iostream>

using namespace std;

int recursiveFib(int, int, int);

void main() {
	char repeat = 'y';
	do {
		int n = 0;
		int nthFib = 0;
		cout << "This program will compute the nth Fibonacci number recursively. Please input n: ";
		cin >> n;
		cout << endl;
	
		nthFib = recursiveFib(n, 1, 2);
		cout << "The " << n << "th Fibonacci number is " << nthFib << endl;
		cout << "Enter y or Y to repeat." << endl;
		cin >> repeat;
	} while ((repeat == 'y')||(repeat == 'Y'));
}

int recursiveFib(int n, int fib1, int fib2) {
	int result;
	int fib3 = fib1 + fib2;
	fib1 = fib2;
	if (n == 0) {
		result = 0;
	} else if (n == 1) {
		result = 1;
	} else {
		result = recursiveFib(n-1, fib2, fib1+fib2);		
	}
	return result;
}

/*
int recursiveFib(int n) {
	int result;
	if (n == 1) {
		result = 1;
	} else if (n == 0) {
		result = 0;
	} else {
		result = recursiveFib(n - 1) + recursiveFib(n - 2);
	}
	return result;
}
*/

/* OUTPUT:
This program will compute the nth Fibonacci number recursively. Please input n:
0

The 0th Fibonacci number is 0
Enter y or Y to repeat.
y
This program will compute the nth Fibonacci number recursively. Please input n:
1

The 1th Fibonacci number is 1
Enter y or Y to repeat.

y
This program will compute the nth Fibonacci number recursively. Please input n:
2

The 2th Fibonacci number is 1
Enter y or Y to repeat.
y
This program will compute the nth Fibonacci number recursively. Please input n:
3

The 3th Fibonacci number is 2
Enter y or Y to repeat.
y
This program will compute the nth Fibonacci number recursively. Please input n:
4

The 4th Fibonacci number is 3
Enter y or Y to repeat.
y
This program will compute the nth Fibonacci number recursively. Please input n:
15

The 15th Fibonacci number is 610
Enter y or Y to repeat.

*/