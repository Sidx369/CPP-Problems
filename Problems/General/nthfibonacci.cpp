#include <iostream>
using namespace std;

int main () {
	int n;
	cout << "Enter n :";
	cin >> n;
	
	int fib_n_2 = 1;
	int fib_n_1 = 1;
	int fib = 1;
	for(int i=3; i<=n; i++){
		fib = fib_n_2 + fib_n_1;
		fib_n_2 = fib_n_1;
		fib_n_1 = fib;
	}

	cout << n << " term of fibonacci sequence: " << fib;
}

