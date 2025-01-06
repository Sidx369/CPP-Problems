#include <iostream>
using namespace std;

int main() {
	int n;
	cout << "Enter binary no.";
	cin >> n;
	int pv = 1;
	int dec = 0;

	while(n!=0){
		dec = dec + pv * n%10;
		n =  n/10;
		pv = pv*2;
	}

	cout << "Decimal no.: " << dec;
}
