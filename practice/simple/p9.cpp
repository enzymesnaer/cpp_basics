// Find cube of a number using MACROS
# include<iostream>
using namespace std;
#define CUBE(x) (x*x*x);

int main(){

	int n, cube;

	cout << "Enter any positive number :: ";
	cin >> n;

	cube = CUBE(n);

	cout << "\n The cube of entered number ["<<n<<"] is :: ["<<cube<<"] \n";
	return 0;

}
