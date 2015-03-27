//LAB1C - Circle - 1/28/2015 - Pete Wilcox
#include <iostream>

using namespace std;

double radius; //Radius input from user
double area; //area of a circle, calculated
double circumference; //circumference of a circle, calculated
double volume; //volume of a sphere, calculated
double surface; //surface area of a sphere, calculated

void main() {
	cout << "This program will accept user input for a radius, \nthen use that value to calculate the area and \ncircumference of a circle, and the volume and \nsurface area of a sphere." << endl;
	cout << "Please enter a value for the radius to be used: ";
	cin >> radius;
	cout << "Thank you. The area and circumference of a circle using " << radius << " as the radius will now be calculated." << endl;
	area = radius * radius * 3.14; //using 3.14 to represent pi
	circumference = 2 * 3.14 * radius;

	cout << "The area of a circle with a radius of " << radius << " is: " << area << "." << endl;
	cout << "The circumference of a circle with a radius of " << radius << " is: " << circumference << "." << endl;
	cout << "The volume and surface area of a sphere using " << radius << " as the radius will now be calculated." << endl;
	volume = (4 * 3.14 * radius * radius * radius)/3;
	surface = 4 * 3.14 * radius * radius;
	cout << "The volume of a sphere with a radius of " << radius << " is: " << volume << "." << endl;
	cout << "The surface area of a sphere with a radius of " << radius << " is: " << surface << "." << endl;
	cout << "Thank you.";
}

/* OUTPUT:

This program will accept user input for a radius,
then use that value to calculate the area and
circumference of a circle, and the volume and
surface area of a sphere.
Please enter a value for the radius to be used: 7.5
Thank you. The area and circumference of a circle using 7.5 as the radius will n
ow be calculated.
The area of a circle with a radius of 7.5 is: 176.625.
The circumference of a circle with a radius of 7.5 is: 47.1.
The volume and surface area of a sphere using 7.5 as the radius will now be calc
ulated.
The volume of a sphere with a radius of 7.5 is: 1766.25.
The surface area of a sphere with a radius of 7.5 is: 706.5.
Thank you.

*/


	