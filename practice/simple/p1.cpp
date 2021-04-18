// quotient and remainder of 2 nums
#include <iostream>
using namespace std;

int main(){
	int divisor, dividend, quotient, remainder;

	cout << "enter dividend :: ";
	cin >> dividend;

	cout << "\n Enter divisor :: ";
	cin >> divisor;


	quotient = dividend / divisor;
	remainder = dividend %  divisor;


	cout << "\nQuotient = " << quotient << endl;
	cout << "\nRemainder = " << remainder << endl;

	return 0;
}
