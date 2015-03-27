/* A program to print four triangles */

#include <iostream>

using namespace std;

void triangle() {
	cout << "  *\n ***\n*****\n";
}

void main() {
	cout << "Wait for it folks..." << endl;
	triangle();
	cout << "And again:..." << endl;
	triangle();
	cout << "And again and again:..." << endl;
	triangle();
	triangle();
	cout << "That's all folks!..." << endl;
}

/* OUTPUT:

Wait for it folks...
  *
 ***
*****
And again:...
  *
 ***
*****
And again and again:...
  *
 ***
*****
  *
 ***
*****
That's all folks!...

*/