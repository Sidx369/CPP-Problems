#include<iostream>
using namespace std;

void rotate_array(int arr[], int n, int d){
	int shift[d];
	for(int i=0; i<d; i++){
		shift[i] = arr[i];
	}

	for(int i=0; i<n-d; i++){
		arr[i] = arr[i+d];
	}

	for(int i=0; i<d; i++){
		arr[n - d + i] = shift[i];
	}
}

int main() {
	int t;
	cin >> t;
	for(int i=0; i<t; i++){
		int n;
		cin >> n;
		int arr[100000];
		for(int i=0; i<n; i++){
			cin >> arr[i];
		}

		int d;
		cin >> d;

		rotate_array(arr, n, d);

		for(int i=0; i<n; i++){
			cout << arr[i] << ' ';
		}
		cout << endl;
	}
}
