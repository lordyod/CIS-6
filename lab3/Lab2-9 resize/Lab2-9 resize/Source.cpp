//LAB3-9 - Resize Array - Pete Wilcox - 4-22-2015
#include <iostream>

using namespace std;

int *resizeArray(int[], int);

void main() {
	const int size = 10;
	
	int nums[size] = {0};
	
	cout << "First array, 1-10:";
	for (int i = 0; i < size; i++) {
		nums[i] = i + 1;
		cout << endl << nums[i];
	}
	int *newNums = nullptr;
	newNums = resizeArray(nums, size);
	cout << endl << "Resized array: ";
	for (int j = 0; j < size*2; j++) {
		cout << endl << newNums[j];
	}
	cout << endl;
	system("pause");
}

int *resizeArray(int nums[], int size) {
	int *newArray = nullptr;
	newArray = new int[size*2];

	for(int i = 0; i < size; i++) {
		newArray[i] = nums[i];
	}
	for(int j = size; j < size*2; j++) {
		newArray[j] = 0;
	}
	return newArray;
}

/* OUTPUT:

First array, 1-10:
1
2
3
4
5
6
7
8
9
10
Resized array:
1
2
3
4
5
6
7
8
9
10
0
0
0
0
0
0
0
0
0
0
Press any key to continue . . .

*/