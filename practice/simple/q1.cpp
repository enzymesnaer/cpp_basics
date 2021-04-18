// program to check character is Uppercase, Lowercase, Digit or Special
#include <iostream>
using namespace std;

int main(){
	char ch;
	cout << "Enter any character to check :: ";
	cin >> ch;

	if (ch>=65 && ch <= 90){
		cout << "\n entered character is uppercase";
	}
	else if(ch >=48 && ch <=57){
		cout << "\n entered character is a digit";
	}
	else if(ch >= 97 && ch <= 122){
		cout << "\n entered character is lowercase";
	}
	else{
		cout << "\n is a special  character";
	}
	return 0;
}
