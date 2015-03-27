//LAB2-7b - Histograms part B - Pete Wilcox - 3/9/2015
#include <iostream>
#include <cmath>
#include <stdlib.h>
#include <iomanip>

using namespace std;


//These three functions will 
void seedGen();					//reseed the random generator
void arrayGen(int []);			//call the random generator 10 times and keep track of results in an array
void displayResults(int []);	//display the array results in a graph using *'s

void main() {
	int counter[10];	//histogram counter
	char repeat;		//repeat if desired
	do {
		cout << "This program will generate a histogram that adds totals of results from the random number generator." << endl;
		system("pause");

		cout << "Calling seedGen()" << endl;
		system("pause"); //debugging
		seedGen();  //call the seed generator function

		cout << "Calling arrayGen()" << endl;
		system("pause"); //debugging
		arrayGen(counter); //pass the counter[] array to the array generator function, which will generate the random numbers and track them in the array
		
		cout << "Calling displayResults()" << endl; //debugging
		displayResults(counter); //pass the array to the function to display results

		cout << "Would you like to repeat? Enter (y) or (Y) to go again." << endl; //repeat if the user enters y or Y
		cin >> repeat;
		system("pause");
	} while ((repeat == 'y')||(repeat=='Y'));
}


void seedGen() {
	cout << "Seedgen starting." << endl;
	system("pause"); //error checking

	int seed; //user input for seed value
	do {
		cout << "Please enter a number to seed the random generator: ";
		cin >> seed;		//User enters the seed value
	} while (!seed);
	srand(seed);
	return;
}

void arrayGen (int numbers[]) {
	double value;		//random value
	cout << "Starting arrayGen()" << endl;
	system("pause"); //error checking

	for (int y = 0; y<10; y++) {	//This resets the counter[] variable to 0, will export to a function
		numbers[y] = 0;
		}


	for (int i=0;i<10000;i++) {		//this loops 10,000 times
		value=0;
		for (int y=0;y<10;y++) { //for each set of 10,000, loop 10 times and
			value += ((double)(rand()))/((double)(RAND_MAX));  //add 10 random numbers together, RAND_MAX is an arbitrary number that depends on compiler(?), this statement will generate a random number between 0 and 1
		}
		for (int t = 0;t<10;t++) {
			if ((value<((double)(t+1)))&&(value>((double)(t)))) {		//for each sum of random numbers, run another loop that increments the appropriate counter[] value
				numbers[t]++;
			}
		}
	}
	return;
}

void displayResults(int numbers[]) {
	cout << "displayResults() starting." << endl;
	system("pause");  //debugging

	cout << "Results:" << endl;
		
	for (int x = 0; x<10; x++) {
		cout << numbers[x] << endl;  //sanity checking - this spits out just the results from the arrayGen so we can e.g. make sure all 10 values have results
	}
	system("pause");
	for (int z = 0; z<40; z++) {  //scale is set for 0-40, this for loop is half of the raster setup and controls descending through the column
		cout << setw(2) << 40-z << " | "; //formatting, provides row numbering
		for (int t=0;t<10;t++) {	//this for loop controls columns
			//cout << counter[t]/100 << " " << (15-z)*100 << endl;
			if(((numbers[t])/100)>=((40-z))) { //the values in the numbers[] will be in the hundreds, this scales it to *=100
				cout << " * ";
			}
			else {
				cout << "   ";
			}
		}
		cout << endl;
	}
	cout << "      1  2  3  4  5  6  7  8  9 10 " << endl; //lower axis label
	system("pause");
	return;
}

/* OUTPUT:
This program will generate a histogram that adds totals of results from the random number generator.
Press any key to continue . . .
Calling seedGen()
Press any key to continue . . .
Seedgen starting.
Press any key to continue . . .
Please enter a number to seed the random generator: 100
Calling arrayGen()
Press any key to continue . . .
Starting arrayGen()
Press any key to continue . . .
Calling displayResults()
displayResults() starting.
Press any key to continue . . .
Results:
0
3
140
1235
3680
3607
1196
135
4
0
Press any key to continue . . .
40 |
39 |
38 |
37 |
36 |              *  *
35 |              *  *
34 |              *  *
33 |              *  *
32 |              *  *
31 |              *  *
30 |              *  *
29 |              *  *
28 |              *  *
27 |              *  *
26 |              *  *
25 |              *  *
24 |              *  *
23 |              *  *
22 |              *  *
21 |              *  *
20 |              *  *
19 |              *  *
18 |              *  *
17 |              *  *
16 |              *  *
15 |              *  *
14 |              *  *
13 |              *  *
12 |           *  *  *
11 |           *  *  *  *
10 |           *  *  *  *
 9 |           *  *  *  *
 8 |           *  *  *  *
 7 |           *  *  *  *
 6 |           *  *  *  *
 5 |           *  *  *  *
 4 |           *  *  *  *
 3 |           *  *  *  *
 2 |           *  *  *  *
 1 |        *  *  *  *  *  *
      1  2  3  4  5  6  7  8  9 10
Press any key to continue . . .
Would you like to repeat? Enter (y) or (Y) to go again.
n
Press any key to continue . . .

This program will generate a histogram that adds totals of results from the rand
om number generator.
Press any key to continue . . .
Calling seedGen()
Press any key to continue . . .
Seedgen starting.
Press any key to continue . . .
Please enter a number to seed the random generator: 564684684
Calling arrayGen()
Press any key to continue . . .
Starting arrayGen()
Press any key to continue . . .
Calling displayResults()
displayResults() starting.
Press any key to continue . . .
Results:
0
1
142
1302
3633
3628
1182
107
4
0
Press any key to continue . . .
40 |
39 |
38 |
37 |
36 |              *  *
35 |              *  *
34 |              *  *
33 |              *  *
32 |              *  *
31 |              *  *
30 |              *  *
29 |              *  *
28 |              *  *
27 |              *  *
26 |              *  *
25 |              *  *
24 |              *  *
23 |              *  *
22 |              *  *
21 |              *  *
20 |              *  *
19 |              *  *
18 |              *  *
17 |              *  *
16 |              *  *
15 |              *  *
14 |              *  *
13 |           *  *  *
12 |           *  *  *
11 |           *  *  *  *
10 |           *  *  *  *
 9 |           *  *  *  *
 8 |           *  *  *  *
 7 |           *  *  *  *
 6 |           *  *  *  *
 5 |           *  *  *  *
 4 |           *  *  *  *
 3 |           *  *  *  *
 2 |           *  *  *  *
 1 |        *  *  *  *  *  *
      1  2  3  4  5  6  7  8  9 10
Press any key to continue . . .

*/