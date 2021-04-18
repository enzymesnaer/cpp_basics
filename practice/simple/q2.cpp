// a year is leap year or not

#include <iostream>
using namespace std;

int main(){
	int year;

	cout << "Enter any year (xxxx) :: ";
	cin >> year;

	if (year%100 == 0){
	
		if(year%400==0){
			cout << "\n is a leap year. \n";
		}
	
	}
	else{

		if(year%4==0){
			cout << "\nis a leap year <<\n";
		}else{
			cout << "\nis not leap  year\n";
		}


	}

	return 0;
}
