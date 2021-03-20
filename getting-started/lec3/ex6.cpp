#include <stdio.h>
#include <iostream>
using namespace std;
int main(){
	char a;
	cin >> a;
	int asc = int(a);

	if(65 <= asc && asc <= 90){
		cout << 1;
	}else if(97 <= asc && asc <= 122){
	       	cout << 0;
	}else if(!isalpha(a)){
		cout << "-1";
       	}

}

