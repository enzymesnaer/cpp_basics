// find sqrt of a number using sqrt() function
#include <iostream>
#include <math.h>

using namespace std;
int main(){
	float sq, n;
	cout << "Enter any poisitve number :: ";
	cin >> n;

	sq = sqrt(n);

	cout << "\nSquare root of entered number ["<<n<<"] is ::"<<sq<<"\n";

	return 0;
}
