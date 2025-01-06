#include<iostream>
using namespace std;

int mult(int m, int n){
	if(n==0)
		return 0;

	int mul = mult(m, n-1);

	return mul + m;
}

int main(){
	int m, n;
	cin >> m >> n;

	cout <<	mult(m, n);
}
