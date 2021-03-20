#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int x, n;

	cin >> x >> n;

	int out = 1;

	int i = 1;
	while (i <= n){

	out = out * x;
	
	i++;
	}
	
	cout << out;

}
