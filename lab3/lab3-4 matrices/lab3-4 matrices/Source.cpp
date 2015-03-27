//LAB3-4 - Matrix Calculations - Pete Wilcox - 3/25/2015
#include <iostream>

using namespace std;

double matrixDivide(int[][], int[][], int[][]);
int matrixMultiply(int[][], int[][], int[][]);
int matrixAdd(int[][], int[][], int[][]);
int matrixSubtract(int[][], int[][], int[][]);
void matrixEntry(int[][], int[][]);
void printMatrix(int[][]);
int mainMenu();

void main() {
	int firstMatrix[2][2] = {0}, secondMatrix[2][2] = {0}, thirdMatrix[2][2] = {0};
	char repeat = 'y';
	int menuChoice = 0;

	while((repeat == 'y')||(repeat == 'Y')) {
		cout << "Matrix Calculator\n";
		cout << "*****************\n";
		cout << "Current matrices: \n";
		cout << "Matrix 1:\n";
		printMatrix(firstMatrix);
		cout << "\nMatrix 2:\n";
		printMatrix(secondMatrix);





	}
}

int mainMenu() {
	int menuChoice = 0;
	do {
		cout << "\n\n\n\n";
		cout << "	1. Enter new matrix data\n";
		cout << "	2. Add matrices\n";
		cout << "	3. Subtract matrices\n";
		cout << "	4. Multiply matrices\n";
		cout << "	5. Divide matrices\n";
		cout << "\n\nPlease select a menu option: ";
		cin >> menuChoice;
		cout << endl;
		
		if((menuChoice < 1)||(menuChoice > 5)) {
			cout << "Invalid choice, please select again.";
		} else {
			return menuChoice;
		}
	} while ((menuChoice < 1) || (menuChoice > 5))
}
