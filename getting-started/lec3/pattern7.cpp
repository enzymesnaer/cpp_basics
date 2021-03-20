#include <iostream>
using namespace std;


int main(){

	int N;
	cin >> N;

	int i = 1;
	while(i<=N){

		int j = 1;
		int m = i;
                while(m<=N-1){
                        cout << " ";
                        m++;
                }

		while(j<=i){
			cout << "*";
			j++;
		}

		int k = 0;

		while(k<i-1){
			cout << "*";
			k++;
		}
	cout << endl;
	i++;
	}

}
