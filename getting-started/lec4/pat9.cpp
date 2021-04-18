#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int n;
	cin >> n;
	int i = 1;
	int k = n;
	while(i<=n){
		int j = 1;
		while(j<=i){
			cout << k-j;
			j++;
		}
		k++;
		i++;
		cout << endl;
	}
}
