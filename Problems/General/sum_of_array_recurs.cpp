#include<iostream>
using namespace std;

int sum_of_array(int arr[], int n){
	if(n == 1){
		return arr[0];
	}

	int sum_n = sum_of_array(arr+1, n-1);
	return sum_n + arr[0];
}

int main(){
	int n;
	cin >> n;
	int arr[1000];
	for(int i=0; i<n; i++){
		cin >> arr[i];
	}

	cout << sum_of_array(arr, n);
}
