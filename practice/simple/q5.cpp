// mul table of a given number
#include <iostream>
using namespace std;

int main(){
	int i,n,table=1;

	cout << "Enter any positive number :: ";
	cin >> n;

	cout << "Multiplication number of a given number "<<n<<" ::" << endl;
	for(i=1; i<=10; i++){
		table = n*i;
		cout << "\t"<<n<<" * "<<i<<" = "<<table<<"" << endl ;
	}

	return 0;
}
