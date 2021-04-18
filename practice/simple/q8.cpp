// generate fibonacci series for N numbers
# include <iostream>
using namespace std;

int main(){
	
	int i, nos,  first=0, second=1, next;
	first=0;
	second=1;

	cout << "How many terms you want to display :: " << endl;
	cin >> nos;

	cout << "The fibonacci series for "<<nos<<" terms are :: \n\n";


	for(i=0; i < nos; i++){
		cout << " " << first << " ";
	        next = first + second; 	
		first = second;
		second = next;
	}	

	cout << "\n";

	return 0;


}
