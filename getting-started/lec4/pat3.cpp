#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int i = 1;
	while(i<=n){
		int k = 1;
		int j = 4;
		while(j>=k){
			cout << j;
			j--;
		}
		cout << endl;
		i++;
	}
}

