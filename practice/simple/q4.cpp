// Factorial of a single digit number using recursion and loop
#include <iostream>
using namespace std;

int main(){
	int i, n, fact=1;
	cout << "Enter any positive number :: ";
	cin >> n;

	for(i=1; i<=n; i++){
		fact = fact * i;
	}

	cout << "Factorial of "<<n<<" is :: "<<fact<<"" << endl;
	return 1;
}
