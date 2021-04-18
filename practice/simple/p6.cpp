// convert Days into years weeks and days
# include<iostream>
using namespace std;
int main(){
	int y, d, w;
	cout << "Enter number of days :: ";
	cin >> d;

	y = d/365;
	int d1 = d%365;
	w = d/7;
	int d2 = d%7;

	cout << "\nNo. of years :: "<< y <<"\n No. of weeks :: "<<w<<"\n No. of Days :: d1--" <<d1<< "\nd2--" <<d2<< endl;

	return 0;	
}
