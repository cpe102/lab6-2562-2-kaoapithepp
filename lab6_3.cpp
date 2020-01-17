#include<iostream>
using namespace std;

char before(char x){
	if (x == 'A'){
		return 'Z';
	}
	if (65 < x && x <= 90){
		return x-1;
	} else {
		cout <<"0";
	}
	
	
}

int main(){
	//Test Case
	cout << before('A') << "\n";
	cout << before('B') << "\n";
	cout << before('P') << "\n";
	cout << before('T') << "\n";
	cout << before('Z') << "\n";
	cout << before('a') << "\n";
	cout << before('0') << "\n";
	cout << before('c') << "\n";
	return 0;
}
