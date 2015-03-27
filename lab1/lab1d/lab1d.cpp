//LAB1D - Change Calculator - 2/2/2015 - Pete Wilcox

#include <iostream>
#include <cmath>

using namespace std;

double charge; //total charge to customer
double paid; //amount paid
int balance; //amount remaining to be paid
double change; //amount of change total
int dollars; //amount of dollars in change
int quarters; //amount of quarters in change
int dimes; //amount of dimes in change
int nickels; //amount of nickels in change
int pennies; //amount of pennies in change

void calculate() {
	dollars = 0;  //set all change variables to 0
	quarters = 0;
	dimes = 0;
	nickels = 0;
	pennies = 0;
	cout << "Total change amount: $" << change << endl;
	balance = (int)((change)*100); //assign balance value to integer of change
	dollars = balance/100;
	balance = balance%100;
	quarters = balance/25;
	balance = balance%25;
	dimes = balance/10;
	balance = balance%10;
	nickels = balance/5;
	balance = balance%5;
	pennies = balance;
	cout << dollars << " dollars, " << quarters << " quarters, " << dimes << " dimes, " << nickels << " nickels, and " << pennies << " pennies." << endl;
}
	
void main() {
	cout << "Enter total charge amount: $";
	cin >> charge;
	cout << endl << "Enter amount paid: $";
	cin >> paid;
	cout << endl << "Calculating change amount." << endl;
	change = paid - charge; //set change variable to the difference between paid amount and total charge;
	if(change==0) { cout << "The customer gave exact change." << endl; } //If the paid amount == total charge, don't do anything else
	if(change<0) { cout << "The customer has not paid enough!" << endl; } //In case they didn't pay enough
	if(change>0) { calculate(); }
	
}


/* OUTPUT:
Enter total charge amount: $17.68

Enter amount paid: $20

Calculating change amount.
Total change amount: $2.32
2 dollars, 1 quarters, 0 dimes, 1 nickels, and 2 pennies.

E:\CIS 6 Intro to computer programming\lab1d\lab1d\Debug>lab1d
Enter total charge amount: $17.68

Enter amount paid: $17.5

Calculating change amount.
The customer has not paid enough!

E:\CIS 6 Intro to computer programming\lab1d\lab1d\Debug>lab1d
Enter total charge amount: $17.68

Enter amount paid: $17.68

Calculating change amount.
The customer gave exact change.

E:\CIS 6 Intro to computer programming\lab1d\lab1d\Debug>

*/