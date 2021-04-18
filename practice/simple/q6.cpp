// reverse a number using while loop
#include <iostream>
using namespace std;

int main(){

	int num, rev=0, r, n;

	cout << "Enter any positive number :: ";
	cin >> n;

	num = n;

	while(num>0){
		r = num%10;
		rev = rev*10+r;
		num = num/10;
	}

	cout << "reversed >> " << rev << endl;
	return 1;
}
