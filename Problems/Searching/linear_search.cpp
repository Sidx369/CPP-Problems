#include <iostream>
using namespace std;

void linearSearch(int arr[], int n, int x){
	for(int i=0; i<n; i++){
		if(arr[i] == x){
			cout << i <<endl;
			return;
		}
	}
	cout << -1;
}

int main() {
	int t;
	cin >> t;

	for(int i=1; i<=t; i++){
		int n;
		cin >> n;
		int arr[100000];

		for(int i=0; i<n; i++){
			cin >> arr[i];
		}
		
		int x;
		cin >> x;
		linearSearch(arr, n, x);	
		
	}
}
