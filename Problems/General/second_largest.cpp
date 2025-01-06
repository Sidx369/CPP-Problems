#include<iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
		int n; 
		cin >> n;
		int arr[100000];
		for(int i=0; i<n; i++){
			cin >> arr[i];
		}
		
		if(n<=1) {
			cout << INT_MIN;
			continue;
		}

		int max = arr[0];
		int secmax = INT_MIN;
		for(int i=1; i<n; i++){
			if(arr[i]> max){
				secmax = max;
				max = arr[i];
			} else if (arr[i]> secmax && arr[i] < max) secmax = arr[i];
		}

		cout << secmax << endl;
	}
}
