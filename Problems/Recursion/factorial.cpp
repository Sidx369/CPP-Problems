#include<iostream>
using namespace std;

int factorial(int n){
	if(n == 0)
		return 1;
	int prevFact = factorial(n-1);
	return prevFact * n;
}

int main(){
	cout <<	factorial(5) << endl;
}

