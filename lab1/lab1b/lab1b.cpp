//LAB1B - Distance between two points - 1/28/2015 - Pete Wilcox

#include <iostream>
#include <cmath>

using namespace std;

// Declare coordinate variables - use doubles for these as the resulting distance is unlikely to be a whole number
double x_1;
double x_2;
double y_1;
double y_2;
double distanceTotal; //Total distance between the two points

void main() {
	//Take inputs for coordinates
	cout << "This program will determine the distance between \ntwo points on a cartesian plane.\nPlease input the first set of coordinates. X: ";
	cin >> x_1;
	cout << "Y: ";
	cin >> y_1;
	cout << "\nYou have entered [" << x_1 << "," << y_1 << "] as the first set of coordinates. Please enter the second set of coordinates now. X: ";
	cin >> x_2;
	cout << "Y: ";
	cin >> y_2;
	cout << "\nYou have entered [" << x_2 << "," << y_2 << "] as the second set of coordinates." << endl;
	
	distanceTotal = sqrt((x_1-x_2)*(x_1-x_2)+(y_1-y_2)*(y_1-y_2)); //Calculate total distance
	
	cout << "The total distance between [" << x_1 << "," << y_1 << "] and [" << x_2 << "," << y_2 << "] is: " << distanceTotal;
}

/* OUTPUT:
This program will determine the distance between
two points on a cartesian plane.
Please input the first set of coordinates. X: 2
Y: 3

You have entered [2,3] as the first set of coordinates. Please enter the second
set of coordinates now. X: 8
Y: -5

You have entered [8,-5] as the second set of coordinates.
The total distance between [2,3] and [8,-5] is: 10

*/