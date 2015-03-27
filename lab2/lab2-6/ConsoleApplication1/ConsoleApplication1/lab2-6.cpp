//LAB2-6 - Interest and Mortgage Payment - Pete Wilcox - 3/2/2015
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

void main () {
	double	principal,			//Principal of the loan
			monthlyRate,		//Calculated monthly interest rate
			yearlyRate,			//Input yearly interest rate
			monthlyPayment,		//Calculated value of monthly payment
			monthlyInterest,	//Calculated value of interest payment per month
			principalRemaining,	//Remaining amount of principal for readout
			monthlyPrincipal;	//Calculated value of principal payment per month
	int		years;				//Input total length of the loan payment
	char	repeat;				//Used to repeat as many times as desired

	do {
		principal = 0; //initialize all variables to 0
		monthlyRate = 0;
		yearlyRate = 0;
		monthlyPayment = 0;
		monthlyInterest = 0;
		principalRemaining = 0;
		monthlyPrincipal = 0;
		years = 0;
		cout << "This program will calculate mortgage payments." << endl;
		cout << "Please enter the principal value of the loan: $";
		cin >> principal;
		cout << endl << "Please enter the yearly interest rate (e.g. 0.06): ";
		cin >> yearlyRate;
		cout << endl << "Please enter the total length of the loan in years: ";
		cin >> years;
		cout << "Calculating loan values for a $" << principal << " loan repaid at " << yearlyRate*100 << "% annual interest rate over " << years << " years." << endl;
		system("pause"); //pause for error checking

		monthlyRate = yearlyRate/12; //monthly rate is easy to calculate
		cout << "Monthly rate: " << monthlyRate << "%" << endl;
		monthlyPayment = (principal * monthlyRate)/(1-(1/(pow((1+monthlyRate),((double)years*12))))); //Formula given for monthly payment
		cout << "Monthly payment: $" << monthlyPayment << endl;
		system("pause");

		principalRemaining = principal; //principalRemaining counts down during the loop

		cout << "Payment Schedule:" << endl;  //Try to print it in a readable form
		cout << "Month   Interest    Principal  Principal" << endl;
		cout << "  #:    Payment:    Payment:   Remaining:" << endl;
		
		for(int i = 1;i<=36;i++) {
			monthlyInterest = principalRemaining*monthlyRate;  //calculate the proportion of monthly payment that is applied to interest and to principal overall
			monthlyPrincipal = monthlyPayment-monthlyInterest;
			principalRemaining = principalRemaining - monthlyPrincipal; //calculate remaining principal
			cout << setprecision(0) << setw(2) << i << "     $" << setprecision(2) << fixed << setw(6) << monthlyInterest << setw(10) << "   $" << monthlyPrincipal << "   $" << principalRemaining << endl;  //output values
		}
		cout << "Would you like to compute values for another mortgage? Enter (y) or (Y) to repeat." << endl;  //repeat if desired
		cin >> repeat;
		cout << endl;
	} while((repeat == 'y')||(repeat == 'Y'));
}

/* OUTPUT:
This program will calculate mortgage payments.
Please enter the principal value of the loan: $250000

Please enter the yearly interest rate (e.g. 0.06): .06

Please enter the total length of the loan in years: 30
Calculating loan values for a $250000 loan repaid at 6% annual interest rate over 30 years.
Press any key to continue . . .
Monthly rate: 0.005%
Monthly payment: $1498.88
Press any key to continue . . .
Payment Schedule:
Month   Interest    Principal  Principal
  #:    Payment:    Payment:   Remaining:
 1     $1250.00         $248.88   $249751.12
 2     $1248.76         $250.12   $249501.00
 3     $1247.51         $251.37   $249249.63
 4     $1246.25         $252.63   $248997.00
 5     $1244.99         $253.89   $248743.11
 6     $1243.72         $255.16   $248487.95
 7     $1242.44         $256.44   $248231.51
 8     $1241.16         $257.72   $247973.80
 9     $1239.87         $259.01   $247714.79
10     $1238.57         $260.30   $247454.49
11     $1237.27         $261.60   $247192.88
12     $1235.96         $262.91   $246929.97
13     $1234.65         $264.23   $246665.74
14     $1233.33         $265.55   $246400.20
15     $1232.00         $266.88   $246133.32
16     $1230.67         $268.21   $245865.11
17     $1229.33         $269.55   $245595.56
18     $1227.98         $270.90   $245324.66
19     $1226.62         $272.25   $245052.41
20     $1225.26         $273.61   $244778.80
21     $1223.89         $274.98   $244503.81
22     $1222.52         $276.36   $244227.46
23     $1221.14         $277.74   $243949.72
24     $1219.75         $279.13   $243670.59
25     $1218.35         $280.52   $243390.07
26     $1216.95         $281.93   $243108.14
27     $1215.54         $283.34   $242824.80
28     $1214.12         $284.75   $242540.05
29     $1212.70         $286.18   $242253.88
30     $1211.27         $287.61   $241966.27
31     $1209.83         $289.04   $241677.22
32     $1208.39         $290.49   $241386.73
33     $1206.93         $291.94   $241094.79
34     $1205.47         $293.40   $240801.39
35     $1204.01         $294.87   $240506.52
36     $1202.53         $296.34   $240210.18
Would you like to compute values for another mortgage? Enter (y) or (Y) to repeat.
y

This program will calculate mortgage payments.
Please enter the principal value of the loan: $250000

Please enter the yearly interest rate (e.g. 0.06): .075

Please enter the total length of the loan in years: 30
Calculating loan values for a $250000.00 loan repaid at 7.50% annual interest rate over 30 years.
Press any key to continue . . .
Monthly rate: 0.01%
Monthly payment: $1748.04
Press any key to continue . . .
Payment Schedule:
Month   Interest    Principal  Principal
  #:    Payment:    Payment:   Remaining:
 1     $1562.50         $185.54   $249814.46
 2     $1561.34         $186.70   $249627.77
 3     $1560.17         $187.86   $249439.91
 4     $1559.00         $189.04   $249250.87
 5     $1557.82         $190.22   $249060.65
 6     $1556.63         $191.41   $248869.24
 7     $1555.43         $192.60   $248676.64
 8     $1554.23         $193.81   $248482.83
 9     $1553.02         $195.02   $248287.81
10     $1551.80         $196.24   $248091.58
11     $1550.57         $197.46   $247894.11
12     $1549.34         $198.70   $247695.41
13     $1548.10         $199.94   $247495.47
14     $1546.85         $201.19   $247294.28
15     $1545.59         $202.45   $247091.84
16     $1544.32         $203.71   $246888.13
17     $1543.05         $204.99   $246683.14
18     $1541.77         $206.27   $246476.87
19     $1540.48         $207.56   $246269.32
20     $1539.18         $208.85   $246060.46
21     $1537.88         $210.16   $245850.31
22     $1536.56         $211.47   $245638.83
23     $1535.24         $212.79   $245426.04
24     $1533.91         $214.12   $245211.92
25     $1532.57         $215.46   $244996.46
26     $1531.23         $216.81   $244779.65
27     $1529.87         $218.16   $244561.48
28     $1528.51         $219.53   $244341.96
29     $1527.14         $220.90   $244121.06
30     $1525.76         $222.28   $243898.78
31     $1524.37         $223.67   $243675.11
32     $1522.97         $225.07   $243450.04
33     $1521.56         $226.47   $243223.57
34     $1520.15         $227.89   $242995.68
35     $1518.72         $229.31   $242766.37
36     $1517.29         $230.75   $242535.62
Would you like to compute values for another mortgage? Enter (y) or (Y) to repeat.
y

This program will calculate mortgage payments.
Please enter the principal value of the loan: $250000

Please enter the yearly interest rate (e.g. 0.06): .06

Please enter the total length of the loan in years: 15
Calculating loan values for a $250000.00 loan repaid at 6.00% annual interest rate over 15 years.
Press any key to continue . . .
Monthly rate: 0.01%
Monthly payment: $2109.64
Press any key to continue . . .
Payment Schedule:
Month   Interest    Principal  Principal
  #:    Payment:    Payment:   Remaining:
 1     $1250.00         $859.64   $249140.36
 2     $1245.70         $863.94   $248276.42
 3     $1241.38         $868.26   $247408.16
 4     $1237.04         $872.60   $246535.56
 5     $1232.68         $876.96   $245658.59
 6     $1228.29         $881.35   $244777.24
 7     $1223.89         $885.76   $243891.49
 8     $1219.46         $890.18   $243001.30
 9     $1215.01         $894.64   $242106.67
10     $1210.53         $899.11   $241207.56
11     $1206.04         $903.60   $240303.95
12     $1201.52         $908.12   $239395.83
13     $1196.98         $912.66   $238483.17
14     $1192.42         $917.23   $237565.94
15     $1187.83         $921.81   $236644.13
16     $1183.22         $926.42   $235717.71
17     $1178.59         $931.05   $234786.66
18     $1173.93         $935.71   $233850.95
19     $1169.25         $940.39   $232910.56
20     $1164.55         $945.09   $231965.47
21     $1159.83         $949.81   $231015.66
22     $1155.08         $954.56   $230061.09
23     $1150.31         $959.34   $229101.75
24     $1145.51         $964.13   $228137.62
25     $1140.69         $968.95   $227168.67
26     $1135.84         $973.80   $226194.87
27     $1130.97         $978.67   $225216.20
28     $1126.08         $983.56   $224232.64
29     $1121.16         $988.48   $223244.16
30     $1116.22         $993.42   $222250.74
31     $1111.25         $998.39   $221252.35
32     $1106.26         $1003.38   $220248.97
33     $1101.24         $1008.40   $219240.57
34     $1096.20         $1013.44   $218227.13
35     $1091.14         $1018.51   $217208.63
36     $1086.04         $1023.60   $216185.03
Would you like to compute values for another mortgage? Enter (y) or (Y) to repeat.
y

This program will calculate mortgage payments.
Please enter the principal value of the loan: $500000

Please enter the yearly interest rate (e.g. 0.06): .06

Please enter the total length of the loan in years: 30
Calculating loan values for a $500000.00 loan repaid at 6.00% annual interest rate over 30 years.
Press any key to continue . . .
Monthly rate: 0.01%
Monthly payment: $2997.75
Press any key to continue . . .
Payment Schedule:
Month   Interest    Principal  Principal
  #:    Payment:    Payment:   Remaining:
 1     $2500.00         $497.75   $499502.25
 2     $2497.51         $500.24   $499002.01
 3     $2495.01         $502.74   $498499.26
 4     $2492.50         $505.26   $497994.01
 5     $2489.97         $507.78   $497486.22
 6     $2487.43         $510.32   $496975.90
 7     $2484.88         $512.87   $496463.03
 8     $2482.32         $515.44   $495947.59
 9     $2479.74         $518.01   $495429.58
10     $2477.15         $520.60   $494908.97
11     $2474.54         $523.21   $494385.77
12     $2471.93         $525.82   $493859.94
13     $2469.30         $528.45   $493331.49
14     $2466.66         $531.10   $492800.39
15     $2464.00         $533.75   $492266.64
16     $2461.33         $536.42   $491730.22
17     $2458.65         $539.10   $491191.12
18     $2455.96         $541.80   $490649.32
19     $2453.25         $544.51   $490104.82
20     $2450.52         $547.23   $489557.59
21     $2447.79         $549.96   $489007.63
22     $2445.04         $552.71   $488454.91
23     $2442.27         $555.48   $487899.43
24     $2439.50         $558.26   $487341.18
25     $2436.71         $561.05   $486780.13
26     $2433.90         $563.85   $486216.28
27     $2431.08         $566.67   $485649.61
28     $2428.25         $569.50   $485080.10
29     $2425.40         $572.35   $484507.75
30     $2422.54         $575.21   $483932.54
31     $2419.66         $578.09   $483354.45
32     $2416.77         $580.98   $482773.47
33     $2413.87         $583.89   $482189.58
34     $2410.95         $586.80   $481602.78
35     $2408.01         $589.74   $481013.04
36     $2405.07         $592.69   $480420.35
Would you like to compute values for another mortgage? Enter (y) or (Y) to repeat.
*/