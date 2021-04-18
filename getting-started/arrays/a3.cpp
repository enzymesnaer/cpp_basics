#include <iostream>
#include <climits>
using namespace std;

void printArray(int input[], int n){

	cout << "Print : " << endl;
	for(int i=0; i<n; i++){
		cout << input[i] << " "; 	
	}
	cout << endl;
}

int main(){

	int n;
	cout << "Enter n : ";
	cin >> n;
	int input[100];

	cout << "Enter array elements : ";

	for(int i=0;i<n;i++){
		cin >> input[i];
	}

	//call fn
	printArray(input,n);
}
