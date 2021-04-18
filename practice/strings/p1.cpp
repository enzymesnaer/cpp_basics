// count occurance of a character
#include <iostream>
#include <string.h>
using namespace std;


int main(){

	int i, count=0;
	char ch[50], c;

	cout << "\nEnter any string :: "<< endl;
	cin >> ch;

	cout << "\nEnter any character to count occurance :: ";
	cin >> c;

	for(i=0; ch[i]!='\0'; i++){
		if(ch[i]==c){
			count++;
		}
	}

	if (count==0){
		cout << c << " not found" << endl;
	}else{
	
		cout << " number of occurances is " << count << endl;
	}

	return 0;
}
