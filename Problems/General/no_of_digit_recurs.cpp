#include<iostream>
using namespace std;

int no_of_digits(int n){
	if(n/10 == 0){
		return 1;
	}
	int no = no_of_digits(n/10);
	return no + 1;
}

int main(){
	int n;
	cin >> n;
	int no = no_of_digits(n);
	cout << no;
}
