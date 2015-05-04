//Game of Life - Pete Wilcox - 5/2/2015
#include <iostream>

using namespace std;

void mainMenu();
void runSim(int);
void calculateTick(bool[][10], int);
void displayBoard(bool[][10], int);
void startBoard(bool[][10], int);
int adjacents(bool[][10], int, int);

void main() {
	cout << endl << "Welcome to the Game of Life.";
	mainMenu();
	system("pause");
}

void mainMenu() {
	char choice;
	int ticks = 0;
	do {
		cout << endl << "Current ticks to run: " << ticks;
		cout << endl << "Please select an option:";
		cout << endl << "1. Change number of ticks to run.";
		cout << endl << "2. Run simulation.";
		cout << endl << "3. Quit.";
		cout << endl;
		cin >> choice;
		switch(choice) {
		case '1':
			do {
				cout << endl << "Please enter the new number of ticks to simulate: ";
				cin >> ticks;
				if(ticks < 1) {
					cout << endl << "Invalid selection, ticks must be greater than 0.";
				}
			} while(ticks < 1);
			break;
		case '2':
			if(ticks > 0) {
				runSim(ticks);
				break;
			}
		case '3':
			return;
		}
	} while(choice != '3');
}

void runSim(int ticks) {
	//initialize board
	const int SIZE = 10;
	bool gameBoard[SIZE][SIZE] = { false };
	startBoard(gameBoard, SIZE);

	cout << endl << "Starting board: ";
	displayBoard(gameBoard, SIZE);

	for(int k = 0; k < ticks; k++) {

		calculateTick(gameBoard, SIZE);

		cout << endl << "Generation " << k + 1 << ":";
		cout << endl;

		displayBoard(gameBoard, SIZE);
		system("pause");
	}
	return;

}

void displayBoard(bool gameBoard[][10], const int SIZE) {
	cout << endl;
	for(int i = 0; i < SIZE; i++) {
		for(int j = 0; j < SIZE; j++) {
			if(gameBoard[i][j] == true) {
				cout << "X";
			} else {
				cout << "-";
			}
		}
		cout << endl;
	}
	return;
}

void startBoard(bool gameBoard[][10], const int SIZE) {
	for(int i = 1; i < SIZE - 1; i++) {
		for(int j = 1; j < SIZE - 1; j++) {
			if(j == i) {
				gameBoard[i][j] = true;
			}
			if(j == SIZE - 1 - i) {
				gameBoard[i][j] = true;
			}
		}
	}
	return;
}

void calculateTick(bool gameBoard[][10], const int SIZE) {
	bool flip[10][10] = { false };
	
	int adjacent;
	for(int i = 0; i < SIZE; i++) {
		for(int j = 0; j < SIZE; j++) {
			adjacent = adjacents(gameBoard, i, j);
			if(gameBoard[i][j] == true) {
				if(adjacent > 3) {
					flip[i][j] = true;
				}
				if(adjacent < 2) {
					flip[i][j] = true;
				}
			} else {
				if(adjacent == 3) {
					flip[i][j] = true;
				}
			}
		}
	}
	for(int k = 0; k < SIZE; k++) {
		for(int m = 0; m < SIZE; m++) {
			if(flip[k][m] == true) {
				if(gameBoard[k][m] == true) {
					gameBoard[k][m] = false;
				} else {
					gameBoard[k][m] = true;
				}
			}
		}
	}


	return;
}

int adjacents(bool gameBoard[][10], int i, int j) {
	int count = 0;

	if(i == 0) {
		if(j == 0) {
			if(gameBoard[0][1] == true) {
				count++;
			}
			if(gameBoard[1][0] == true) {
				count++;
			}
			if(gameBoard[1][1] == true) {
				count++;
			}
		} else if(j == 9) {
			if(gameBoard[0][8] == true) {
				count++;
			}
			if(gameBoard[1][8] == true) {
				count++;
			}
			if(gameBoard[1][9] == true) {
				count++;
			}
		} else {
			if(gameBoard[i][j - 1] == true) {
				count++;
			}
			if(gameBoard[i][j + 1] == true) {
				count++;
			}
			if(gameBoard[i + 1][j - 1] == true) {
				count++;
			}
			if(gameBoard[i + 1][j] == true) {
				count++;
			}
			if(gameBoard[i + 1][j + 1] == true) {
				count++;
			}
		}
	} else if(i == 9) {
		if(j == 0) {
			if(gameBoard[i][1] == true) {
				count++;
			}
			if(gameBoard[i - 1][0] == true) {
				count++;
			}
			if(gameBoard[i - 1][1] == true) {
				count++;
			}
		} else if(j == 9) {
			if(gameBoard[i][8] == true) {
				count++;
			}
			if(gameBoard[i - 1][8] == true) {
				count++;
			}
			if(gameBoard[i - 1][9] == true) {
				count++;
			}
		} else {
			if(gameBoard[i][j - 1] == true) {
				count++;
			}
			if(gameBoard[i][j + 1] == true) {
				count++;
			}
			if(gameBoard[i - 1][j - 1] == true) {
				count++;
			}
			if(gameBoard[i - 1][j] == true) {
				count++;
			}
			if(gameBoard[i - 1][j + 1] == true) {
				count++;
			}
		}
	} else {
		if(j == 0) {
			if(gameBoard[i][1] == true) {
				count++;
			}
			if(gameBoard[i - 1][0] == true) {
				count++;
			}
			if(gameBoard[i - 1][1] == true) {
				count++;
			}
			if(gameBoard[i + 1][0] == true) {
				count++;
			}
			if(gameBoard[i + 1][1] == true) {
				count++;
			}
		} else if(j == 9) {
			if(gameBoard[i][8] == true) {
				count++;
			}
			if(gameBoard[i - 1][8] == true) {
				count++;
			}
			if(gameBoard[i - 1][9] == true) {
				count++;
			}
			if(gameBoard[i + 1][8] == true) {
				count++;
			}
			if(gameBoard[i + 1][9] == true) {
				count++;
			}
		} else {
			if(gameBoard[i][j - 1] == true) {
				count++;
			}
			if(gameBoard[i][j + 1] == true) {
				count++;
			}
			if(gameBoard[i - 1][j - 1] == true) {
				count++;
			}
			if(gameBoard[i - 1][j] == true) {
				count++;
			}
			if(gameBoard[i - 1][j + 1] == true) {
				count++;
			}
			if(gameBoard[i + 1][j - 1] == true) {
				count++;
			}
			if(gameBoard[i + 1][j] == true) {
				count++;
			}
			if(gameBoard[i + 1][j + 1] == true) {
				count++;
			}
		}
	}
	return count;
}

		
		




/* OUTPUT:


Welcome to the Game of Life.
Current ticks to run: 0
Please select an option:
1. Change number of ticks to run.
2. Run simulation.
3. Quit.
1

Please enter the new number of ticks to simulate: 10

Current ticks to run: 10
Please select an option:
1. Change number of ticks to run.
2. Run simulation.
3. Quit.
2

Starting board:
----------
-X------X-
--X----X--
---X--X---
----XX----
----XX----
---X--X---
--X----X--
-X------X-
----------

Generation 1:

----------
----------
--X----X--
---XXXX---
---X--X---
---X--X---
---XXXX---
--X----X--
----------
----------
Press any key to continue . . .

Generation 2:

----------
----------
---XXXX---
--XXXXXX--
--XX--XX--
--XX--XX--
--XXXXXX--
---XXXX---
----------
----------
Press any key to continue . . .

Generation 3:

----------
----XX----
--X----X--
----------
-X------X-
-X------X-
----------
--X----X--
----XX----
----------
Press any key to continue . . .

Generation 4:

----------
----------
----------
----------
----------
----------
----------
----------
----------
----------
Press any key to continue . . .

Generation 5:

----------
----------
----------
----------
----------
----------
----------
----------
----------
----------
Press any key to continue . . .

Generation 6:

----------
----------
----------
----------
----------
----------
----------
----------
----------
----------
Press any key to continue . . .

Generation 7:

----------
----------
----------
----------
----------
----------
----------
----------
----------
----------
Press any key to continue . . .

Generation 8:

----------
----------
----------
----------
----------
----------
----------
----------
----------
----------
Press any key to continue . . .

Generation 9:

----------
----------
----------
----------
----------
----------
----------
----------
----------
----------
Press any key to continue . . .

Generation 10:

----------
----------
----------
----------
----------
----------
----------
----------
----------
----------
Press any key to continue . . .

Current ticks to run: 10
Please select an option:
1. Change number of ticks to run.
2. Run simulation.
3. Quit.
3
Press any key to continue . . .

*/