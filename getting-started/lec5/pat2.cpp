#include <iostream>
using namespace std;
int main(){
	int n;
	cin >> n;

	int i=1;
	while(i<=n){
		for(int sp=1; sp<=n-i;sp++){
			cout<<" ";
		}
		for(int j = 1; j <= i; j++){
			cout<<j;
		}

		cout << endl;
		i++;
	}

}
