//  number of digits in  number
#include <iostream>
using namespace std;
 int main(){
 	int n, num, a=0;
	cout << "Enter any positive integer :: " << endl;
	cin >> n;
	num=n;

	while(num>0){
		num = num/10;
		a++;
	}

	cout << "Number of digits in a number is :: " << a << endl;

	return 0;
 
 }
