#include<iostream>
using namespace std;

void insertion_sort(int arr[], int n){
	for(int i=1; i<n; i++){
		int curr = arr[i];
		int j;
		for(j = i-1; j>=0; j--){
			if(curr < arr[j]){
				arr[j+1] = arr[j];
			} else {
				break;
			}
		}
		arr[j+1] = curr;
	}
}

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

		insertion_sort(arr, n);

		for(int i=0; i<n; i++){
			cout << arr[i] << ' '; 
		}

		cout << endl;
	}
}
