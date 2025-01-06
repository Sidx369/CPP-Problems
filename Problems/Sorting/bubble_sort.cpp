#include<iostream>
using namespace std;

void bubble_sort(int arr[], int n){
	int temp = 0;
	for(int i=0; i<n; i++){
		for(int j=0; j<n-i-1; j++){
			if(arr[j]>arr[j+1]){
				temp = arr[j+1];
				arr[j+1] = arr[j];
				arr[j] = temp;
			}
		}
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

		bubble_sort(arr, n);

		for(int i=0; i<n; i++){
			cout << arr[i] << ' ';
		}

		cout << endl;
	}
}
