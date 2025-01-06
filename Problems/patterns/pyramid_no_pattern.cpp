#include <iostream>
using namespace std;

int main() {
	int n;
	cout << "Enter no. :";
	cin >> n;
	int i=1;

	while(i<=n){
		int j = n-i;
		while(j>0){
			cout << ' ';
			j--;
		}

		j=1;
		while(j<=i){
			cout << i-j+1;
			j++;
		}
		
		j=2;
		while(j<=i){
			cout << j;
			j++;
		}

		cout << endl;
		i++;
	}
}
