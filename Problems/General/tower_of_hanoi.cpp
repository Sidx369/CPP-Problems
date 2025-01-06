#include<iostream>
using namespace std;

void hanoi(int n, char s, char d, char a){
	if(n==1){
		cout << s << ' ' << d << endl;
		return;
	}
	hanoi(n-1, s, a, d);
	
	cout << s << ' ' << d << endl;

	hanoi(n-1, a, d, s);
	return;
}

int main(){
	int n;
	char s = 'a', d = 'c', a = 'b';
	cin >> n;
	
	hanoi(n, s, d, a);
}
