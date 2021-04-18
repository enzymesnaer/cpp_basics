#include <iostream>
#include <cmath>
using namespace std;
int main(){



	int n;
	cin >> n;

	int i = 1;
	char ch = 'A';
	while(i<=n){	

		int j = 1;
		while(j<=i){
			cout << ch;
			j++;
		}
	ch = ch + 1;
	i++;
	cout << endl;
	}

}
