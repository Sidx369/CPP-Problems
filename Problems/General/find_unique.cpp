#include<iostream>
using namespace std;

int main() {
	int t;
	cin >> t;

	for(int i=0; i<t; i++){
		int n;
		cin >> n;
		int arr[1000];

		for(int i=0; i<n; i++){
			cin >> arr[i];
		}
		
		bool uniqueFound = false;

		for(int i=0; i<n; i++){
			for(int j=0; j<n; j++){
				if(i!=j && arr[i]==arr[j]){
					break;
				}
				if(j==n-1){
					cout << arr[i];
					uniqueFound = true;
					break;
				}
			}
			if(uniqueFound){
				break;
			}
		}
	}
}
