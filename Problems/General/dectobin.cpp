#include <iostream>
using namespace std;

int main() {
	int n;
	cout << "Enter decimal no. : ";
	cin >> n;
	
	int bin=0;
	int vp = 1;
	while(n!=0) {
		int rem = n%2;
		bin = bin + vp*rem;
		vp = vp*10;
		n = n/2;
	}

	cout << "Binary is: " << bin;
}

