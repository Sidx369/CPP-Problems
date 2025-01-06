#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int i = 1;

	while(i<=n/2 + 1) {
		int j = n/2 - i + 1;
		while(j>=1){
			cout << ' ';
			j--;	
		}

		j = 1;
		while(j<=2*i-1){
			cout << '*';
			j ++;
		}
		cout << endl;
		i ++;
	}
	
	i = 1;
	while(i<=n/2) {
		int j = 1;
		while(j<=i){
			cout << ' ';
			j++;
		}
		
		j = n-2*i;
		while(j>=1){
			cout << '*';
			j--;
		}
		cout << endl;
		i++;
	}
}
