//LAB1E - Tax Calculator - 2/2/2015 - Pete Wilcox
#include <iostream>
#include <cmath>
#include <iomanip> //for setprecision and fixed

using namespace std;

double	incomeTotal,				//Total pre-tax income value
		taxTotal,					//Total taxes owed
		incomeFinal,				//Total post-tax income
		tax_0,						//Amount of taxes in each bracket
		tax_1,
		tax_2,
		tax_3,
		tax_4,
		tax_5,
		income_0,					//Amount of income in each bracket
		income_1,	
		income_2,
		income_3,
		income_4,
		income_5;

const double
		BRACKET_0 =         0.00,	//Income cutoff points for each tax bracket
		BRACKET_1 =		30000.00,
		BRACKET_2 =		50000.00,
		BRACKET_3 =	   100000.00,
		BRACKET_4 =    200000.00,
		BRACKET_5 =    250000.00,
		TAX_RATE_0 =		0.00,	//Tax rate for each tax bracket
		TAX_RATE_1 =		0.10,
		TAX_RATE_2 =		0.20,
		TAX_RATE_3 =		0.30,
		TAX_RATE_4 =		0.35,
		TAX_RATE_5 =		0.40;


void main () {
		cout << "Preliminary error checking:" << endl
		     << "Tax Brackets are: " << endl
			 << "BRACKET_0 = " << BRACKET_0 << endl
		 	 << "BRACKET_1 = " << BRACKET_1	<< endl
		 	 << "BRACKET_2 = " << BRACKET_2	<< endl
			 << "BRACKET_3 = " << BRACKET_3	<< endl
			 << "BRACKET_4 = " << BRACKET_4 << endl
			 << "BRACKET_5 = " << BRACKET_5 << endl
			 << "TAX_RATE_0 = " << TAX_RATE_0 << endl
			 << "TAX_RATE_1 = " << TAX_RATE_1 << endl
			 << "TAX_RATE_2 = " << TAX_RATE_2 << endl
			 << "TAX_RATE_3 = " << TAX_RATE_3 << endl
			 << "TAX_RATE_4 = " << TAX_RATE_4 << endl
			 << "TAX_RATE_5 = " << TAX_RATE_5 << endl;
		system("pause");

		cout << "Input total income: $";
		cin >> incomeTotal;

		cout << setprecision(2) << fixed;														//Set decimal values to 2 places
		cout << endl << "Calculating taxes for total income of $" << incomeTotal << endl;

		system("pause");

		if(incomeTotal>BRACKET_5) {			  //BRACKET 5
			income_5 = incomeTotal-BRACKET_5; //assign total amount of income to bracket 5, total income - 250k
			tax_5	 = income_5*TAX_RATE_5;   //calculate taxes for bracket 5
			taxTotal += tax_5;			      //add to total taxes

			cout << "Bracket 5 taxes: " << TAX_RATE_5*100 << "% of $" << income_5 << " = $" << tax_5 << endl;
			cout << "Cumulative taxes: $" << taxTotal << endl;

			system("pause");
		}

		if(incomeTotal>BRACKET_4) {		      //BRACKET 4
			income_4 = incomeTotal-BRACKET_4;   //calculate amount of income in bracket 4
			if(income_4>(BRACKET_5-BRACKET_4)) { //make sure we don't calculate taxes on higher brackets
				income_4 = BRACKET_5-BRACKET_4;
			}
			tax_4	 = income_4*TAX_RATE_4;
			taxTotal += tax_4;

			cout << "Bracket 4 taxes: " << TAX_RATE_4*100 << "% of $" << income_4 << " = $" << tax_4 << endl;
			cout << "Cumulative taxes: $" << taxTotal << endl;
			
			system("pause");
		}

		if(incomeTotal>BRACKET_3) {				//BRACKET 3
			income_3 = incomeTotal-BRACKET_3;   //calculate amount of income in bracket 3
			if(income_3>(BRACKET_4-BRACKET_3)) { //make sure we don't calculate taxes on higher brackets
				income_3 = BRACKET_4-BRACKET_3;
			}
			tax_3	 = income_3*TAX_RATE_3;
			taxTotal += tax_3;

			cout << "Bracket 3 taxes: " << TAX_RATE_3*100 << "% of $" << income_3 << " = $" << tax_3 << endl;
			cout << "Cumulative taxes: $" << taxTotal << endl;
			
			system("pause");
		}

		if(incomeTotal>BRACKET_2) {				//BRACKET 2
			income_2 = incomeTotal-BRACKET_2;   //calculate amount of income in bracket 2
			if(income_2>(BRACKET_3-BRACKET_2)) { //make sure we don't calculate taxes on higher brackets
				income_2 = BRACKET_3-BRACKET_2;
			}
			tax_2	 = income_2*TAX_RATE_2;
			taxTotal += tax_2;

			cout << "Bracket 2 taxes: " << TAX_RATE_2*100 << "% of $" << income_2 << " = $" << tax_2 << endl;
			cout << "Cumulative taxes: $" << taxTotal << endl;
			
			system("pause");
		}

		if(incomeTotal>BRACKET_1) {				//BRACKET 1
			income_1 = incomeTotal-BRACKET_1;   //calculate amount of income in bracket 1
			if(income_1>(BRACKET_2-BRACKET_1)) { //make sure we don't calculate taxes on higher brackets
				income_1 = BRACKET_2-BRACKET_1;
			}
			tax_1	 = income_1*TAX_RATE_1;
			taxTotal += tax_1;

			cout << "Bracket 1 taxes: " << TAX_RATE_1*100 << "% of $" << income_1 << " = $" << tax_1 << endl;
			cout << "Cumulative taxes: $" << taxTotal << endl;
			
			system("pause");
		}

		incomeFinal = incomeTotal - taxTotal;

		cout << "Total income: $" << incomeTotal << endl;
		cout << "Total taxes owed: $" << taxTotal << endl;
		cout << "Total after-tax income: $" << incomeFinal << endl;

		system("pause");

}

/* OUTPUT:

Preliminary error checking:
Tax Brackets are:
BRACKET_0 = 0
BRACKET_1 = 30000
BRACKET_2 = 50000
BRACKET_3 = 100000
BRACKET_4 = 200000
BRACKET_5 = 250000
TAX_RATE_0 = 0
TAX_RATE_1 = 0.1
TAX_RATE_2 = 0.2
TAX_RATE_3 = 0.3
TAX_RATE_4 = 0.35
TAX_RATE_5 = 0.4
Press any key to continue . . .
Input total income: $300000

Calculating taxes for total income of $300000.00
Press any key to continue . . .
Bracket 5 taxes: 40.00% of $50000.00 = $20000.00
Cumulative taxes: $20000.00
Press any key to continue . . .
Bracket 4 taxes: 35.00% of $50000.00 = $17500.00
Cumulative taxes: $37500.00
Press any key to continue . . .
Bracket 3 taxes: 30.00% of $100000.00 = $30000.00
Cumulative taxes: $67500.00
Press any key to continue . . .
Bracket 2 taxes: 20.00% of $50000.00 = $10000.00
Cumulative taxes: $77500.00
Press any key to continue . . .
Bracket 1 taxes: 10.00% of $20000.00 = $2000.00
Cumulative taxes: $79500.00
Press any key to continue . . .
Total income: $300000.00
Total taxes owed: $79500.00
Total after-tax income: $220500.00
Press any key to continue . . .

*/