#include <iostream>
using namespace std;

int main() {
	int n;
	cout << "Enter a no. ";
	cin >> n;
	
	int rev = 0;
	while(n!=0){
		int ones = n%10;
		n = n/10;
		rev = rev*10 + ones;
	}
	cout << "Reverse is: " << rev;
}
