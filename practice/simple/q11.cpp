// sum of square of first n Natural numbers

#include <iostream>
using namespace std;

int main(){

	unsigned long n, i, sum=0, d;

	cout << "Enter any number :: "<< endl;
	cin >> n;

	for(i=1;i<=n;++i){
		d = i*i;
		sum += d;
	}

	cout << "sum of square of first "<<n<<" numbers = " << sum << endl;
	return 0;
}
