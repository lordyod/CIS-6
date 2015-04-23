//Lab 4-1 - Sphere - Pete Wilcox - 4-23-2015
#include <iostream>
#include <string>

using namespace std;

const double PI = 3.1415;

class Sphere {
private:
	double xCoord, yCoord, zCoord, radius;
public:
	void setX(double);
	void setY(double);
	void setZ(double);
	void setRadius(double);
	void getCoords();
	void getRadius();
	void getVolume();
	void getSurface();
	Sphere();
};

void changeCenter(double*, double*, double*);

void main() {
	cout << "This program will calculate different properties of a sphere." << endl;
	Sphere ball;
	int menu;

	do {

		cout << endl << "Please choose from one of the options below:\n";
		
		do {
			cout << endl << "1. Exit.";
			cout << endl << "2. Change sphere center point.";
			cout << endl << "3. Change sphere radius.";
			cout << endl << "4. Get coordinates of center.";
			cout << endl << "5. Get radius of sphere.";
			cout << endl << "6. Get surface area of sphere.";
			cout << endl << "7. Get volume of sphere.";
			cout << endl;
			cin >> menu;
			cout << endl;
			if((menu > 9) || (menu < 0)) {
				cout << endl << "Invalid choice, please choose again.";
			}
		} while((menu >9) || (menu < 0));

		if(menu == 1) {
			break;
		} else if(menu == 2) {
			double ballX, ballY, ballZ;

			changeCenter(&ballX, &ballY, &ballZ);

			ball.setX(ballX);
			ball.setY(ballY);
			ball.setZ(ballZ);
		} else if(menu == 3) {
			cout << endl << "Enter the new radius: ";
			double newRadius;
			cin >> newRadius;
			ball.setRadius(newRadius);
		} else if(menu == 4) {
			ball.getCoords();
		} else if(menu == 5) {
			ball.getRadius();
		} else if(menu == 6) {
			ball.getSurface();
		} else if(menu == 7) {
			ball.getVolume();
		}
	} while(menu != 1);
	system("pause");
}

Sphere::Sphere() {
	xCoord = 0;
	yCoord = 0;
	zCoord = 0;
	radius = 1;
}

void Sphere::setX(double x) {
	xCoord = x;
	return;
}

void Sphere::setY(double y) {
	yCoord = y;
	return;
}

void Sphere::setZ(double z) {
	zCoord = z;
	return;
}

void Sphere::setRadius(double r) {
	if(r > 0) {
		radius = r;
	} else {
		cout << endl << "Radius cannot be negative.";
	}
	return;
}

void Sphere::getCoords() {
	cout << endl << "The sphere is centered at: ";
	cout << endl << "X: " << xCoord << ", Y: " << yCoord << ", Z: " << zCoord;

	return;
}

void Sphere::getRadius() {
	cout << endl << "The radius of the sphere is: " << radius;
	return;
}

void Sphere::getSurface() {
	cout << endl << "The surface area of the sphere is: " << 4 * PI * pow(radius, 2);
	return;
}

void Sphere::getVolume() {
	cout << endl << "The volume of the sphere is: " << 4 * PI * pow(radius, 3) / 3;
	return;
}


void changeCenter(double *xPtr, double *yPtr, double *zPtr) {
	string coords;
	cout << endl << "Please enter the new coordinates for the center point in the format XXX,YYY,ZZZ: ";
	cin >> coords;

	string xCoord, yCoord, zCoord;
	int comma1, comma2;

	comma1 = coords.find(',', 0);
	comma2 = coords.find(',', (comma1 + 1));
	xCoord = coords.substr(0, (comma1));
	yCoord = coords.substr((comma1 + 1), (comma2 - comma1));
	zCoord = coords.substr((comma2 + 1), (coords.length() - comma2));

	*xPtr = stod(xCoord);
	*yPtr = stod(yCoord);
	*zPtr = stod(zCoord);

	cout << endl << "X: " << *xPtr << ", Y: " << *yPtr << ", Z: " << *zPtr;

	return;
}


/* OUTPUT:

This program will calculate different properties of a sphere.

Please choose from one of the options below:

1. Exit.
2. Change sphere center point.
3. Change sphere radius.
4. Get coordinates of center.
5. Get radius of sphere.
6. Get surface area of sphere.
7. Get volume of sphere.
2


Please enter the new coordinates for the center point in the format XXX,YYY,ZZZ:
100,200,300

X: 100, Y: 200, Z: 300
Please choose from one of the options below:

1. Exit.
2. Change sphere center point.
3. Change sphere radius.
4. Get coordinates of center.
5. Get radius of sphere.
6. Get surface area of sphere.
7. Get volume of sphere.
3


Enter the new radius: 99.564

Please choose from one of the options below:

1. Exit.
2. Change sphere center point.
3. Change sphere radius.
4. Get coordinates of center.
5. Get radius of sphere.
6. Get surface area of sphere.
7. Get volume of sphere.
4


The sphere is centered at:
X: 100, Y: 200, Z: 300
Please choose from one of the options below:

1. Exit.
2. Change sphere center point.
3. Change sphere radius.
4. Get coordinates of center.
5. Get radius of sphere.
6. Get surface area of sphere.
7. Get volume of sphere.
5


The radius of the sphere is: 99.564
Please choose from one of the options below:

1. Exit.
2. Change sphere center point.
3. Change sphere radius.
4. Get coordinates of center.
5. Get radius of sphere.
6. Get surface area of sphere.
7. Get volume of sphere.
6


The surface area of the sphere is: 124567
Please choose from one of the options below:

1. Exit.
2. Change sphere center point.
3. Change sphere radius.
4. Get coordinates of center.
5. Get radius of sphere.
6. Get surface area of sphere.
7. Get volume of sphere.
7


The volume of the sphere is: 4.13412e+006
Please choose from one of the options below:

1. Exit.
2. Change sphere center point.
3. Change sphere radius.
4. Get coordinates of center.
5. Get radius of sphere.
6. Get surface area of sphere.
7. Get volume of sphere.
1

Press any key to continue . . .

*/