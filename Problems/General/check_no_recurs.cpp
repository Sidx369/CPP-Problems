#include<iostream>
using namespace std;

bool check_no(int n, int arr[], int x){
	if(n==0){
		return false;
	}

	if(arr[0] == x){
		return true;
	}

	bool isPresent = check_no(n-1, arr+1, x);
	return isPresent;
}

int main(){
	int n, x;
	cin >> n;
	int arr[1000];
	for(int i=0; i<n; i++){
		cin >> arr[i];
	}
	cin >> x;

	cout <<	check_no(n, arr, x);
}
