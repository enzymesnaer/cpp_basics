// swap 2 numberes without using a temp var
# include <iostream>
using namespace std;

int main(){

	int a,b;

	cout << "Enter 1st number :: ";

	cin >> a;

	cout << "\nEnter 2nd number :: ";

	cin >> b;

	cout << "\n Before swapping, the numbers are :: " << endl;
	cout << "\n\ta = " << a << " , b = " << b << endl;

	a = a + b;
	b = a - b;
	a = a - b;

	cout << "\nAfter swapping, numbers are :: " << endl;
	cout << "\n\ta = " << a << ", b = " << b << endl;

	return 0;

}
