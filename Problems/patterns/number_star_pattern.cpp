#include <iostream>
using namespace std;

int main() {
	int n;
	cout << "Enter no.: ";
	cin >> n;
	
	int i = 1;
	while(i<=n){
		int j=1;
		while(j<=n-i+1){
			cout << j;
			j++;
		}
		
		j=1;
		while(j<=(i-1)*2){
			cout << '*';
			j++;
		}
		
		j = n - i + 1;
		while(j>=1){
			cout << j;
			j --;
		}

		cout << endl;
		i++;
	}
}
