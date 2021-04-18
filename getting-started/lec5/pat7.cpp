#include <iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	int i = 1;

	while(i<=n){
		int sp = n-i;
		while(sp>0){
			cout << ' ';
			sp--;
		}
		int star=1;
		while(star <= 2*i-1){
			cout << '*';
			star++;
		}
		cout << endl;
		i++;
	}
}
