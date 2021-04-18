// sum of n natural numbers

#include <iostream>
using namespace std;

int main(){
	int i, n, sum=0;
	cout << "How many numbers you want :: ";
	cin >> n;
	for(i=1;i<=n; ++i){
		sum += i;
	}
	cout << sum;
	return 0;
}
