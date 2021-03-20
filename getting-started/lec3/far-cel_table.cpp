#include <iostream>
using namespace std;

int main(){
	int S, E, W;
	cin >> S;
	cin >> E;
	cin >> W;
	
	while(S<=E){
	float v = (S-32) * (5.0/9.0);
	cout << S << "\t" << (int)v << endl;
	S = S+W;
	}
}
