#include<iostream>
using namespace std;

void print_no(int n){
	if(n == 1){
		cout << 1;
		return;
	}
	print_no(n - 1);
	cout << n;
	return;
}

int main(){
	int n;
	cin >> n;
	print_no(n);
}
