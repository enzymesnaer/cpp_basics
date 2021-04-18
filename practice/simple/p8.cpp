//Compound interest formula
// A = P(1 + r/n)^(nt)
// A = the future value of the investment/loan, including interest
// P = the principal investment amount (the initial deposit or loan amount)
// r = the annual interest rate (decimal)
// n = the number of times the interest is compounded per year
// t = the number of years the money is invested or borrowed for

#include <iostream>
#include <math.h>
using namespace std;
int main(){
	float p,r,t,ci;
	cout << "Enter Principal (Amount) :: ";
	cin >> p;

	cout << "\nEnter Rate of Interest :: ";
	cin >> r;

	cout << "\nEnter Time Period :: ";
	cin >> t;

	ci = p*pow((1+r/100), t);

	cout << "\nThe calculated  compiund  interest is = "<<ci<<"\n";
	return 0;
}
