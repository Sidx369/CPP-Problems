#include<iostream>
using namespace std;

void print_leaders(int arr[], int n){
	int a;
	for(int i=0; i<n; i++){
		a = arr[i];
		for(int j=i+1; j<n; j++){
			if(arr[j]>a){
				break;
			} else if (j == n-1)
				cout << arr[i] << ' ';
		}
	}
	cout << arr[n-1];
}

int main(){
	int n;
	cin >> n;
	int arr[100000];
	for(int i=0; i<n; i++){
		cin >> arr[i];
	}

	print_leaders(arr, n);
}
