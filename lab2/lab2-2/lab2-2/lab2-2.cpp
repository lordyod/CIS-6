//LAB2-2 - Reversing a number - 2/11/2015 - Pete Wilcox
#include <iostream>

using namespace std;

int		input,		//user input
		working,	//working value
		count,		//for the loops
		output;		//value returned to user
char	repeat;		//Gives option to repeat program

void main() {
	repeat = 'n';
	do {
		do {
			input = 0;
			working = 0;
			output = 0;
			cout << "Please enter a whole number greater than 0: ";
			cin >> input;
			cout << endl << "You entered: " << input << endl; //error checking
			system("pause");
			working = input; //working variable is used instead of input so we can modify it as we go

			if(input>9) { //This portion only runs on inputs that are greater than 9
				for(int count=1;count<input;count=count*10) { //count starts at the 1s place
					cout << "Adding " << working%(count*10)/count << endl; //Add modulus count*10 as the next digit in order
					output = (output*10)+working%(count*10)/count; //Add that to the output variable
					cout << "New output number: " << output << endl; //Repeat the output variable in process
					working=working-working%(count*10);
					system("pause");
				}
			}
			else if ((input <10)&&(input>0)) { //If input is a single digit, just output that number
				output = input;
			}
			else { //The program only makes sense with inputs greater than zero
				cout << "Invalid entry. Please try again." << endl;
				input = 0;
			}
		} while (input == 0); //This loop runs until the user puts in a usable entry
		cout << "User entry: " << input << endl;	
		cout << "Final number: " << output << endl;
		system("pause");
		cout << "Do you want to repeat with another number?" << endl << "Enter (Y)es to repeat: "; //Because it's fancy
		cin >> repeat;
	} while ((repeat=='Y')||(repeat=='y'));
}
		
/* OUTPUT:Please enter a whole number greater than 0: 123456789

You entered: 123456789
Press any key to continue . . .
Adding 9
New output number: 9
Press any key to continue . . .
Adding 8
New output number: 98
Press any key to continue . . .
Adding 7
New output number: 987
Press any key to continue . . .
Adding 6
New output number: 9876
Press any key to continue . . .
Adding 5
New output number: 98765
Press any key to continue . . .
Adding 4
New output number: 987654
Press any key to continue . . .
Adding 3
New output number: 9876543
Press any key to continue . . .
Adding 2
New output number: 98765432
Press any key to continue . . .
Adding 1
New output number: 987654321
Press any key to continue . . .
User entry: 123456789
Final number: 987654321
Press any key to continue . . .
Do you want to repeat with another number?
Enter (Y)es to repeat: y
Please enter a whole number greater than 0: 15

You entered: 15
Press any key to continue . . .
Adding 5
New output number: 5
Press any key to continue . . .
Adding 1
New output number: 51
Press any key to continue . . .
User entry: 15
Final number: 51
Press any key to continue . . .
Do you want to repeat with another number?
Enter (Y)es to repeat: y
Please enter a whole number greater than 0: -564

You entered: -564
Press any key to continue . . .
Invalid entry. Please try again.
Please enter a whole number greater than 0:
10001

You entered: 10001
Press any key to continue . . .
Adding 1
New output number: 1
Press any key to continue . . .
Adding 0
New output number: 10
Press any key to continue . . .
Adding 0
New output number: 100
Press any key to continue . . .
Adding 0
New output number: 1000
Press any key to continue . . .
Adding 1
New output number: 10001
Press any key to continue . . .
User entry: 10001
Final number: 10001
Press any key to continue . . .*/