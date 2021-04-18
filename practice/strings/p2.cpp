// Length of string without using strlen
#include <iostream>
#include <string.h>
using namespace std;

int main(){

	int i, count=0;
	char ch[50];

	cout << "\n Enter any string :: "<< endl;
	cin >> ch;

	for(i=0; ch[i]!='\0'; i++){
		count++;
	}

	cout << "\nLength of string is :: " << count << endl;
	return 0;
}
