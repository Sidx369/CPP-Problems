#include<iostream>
using namespace std;

int binarySearch(int n, int arr[], int x){
	int s = 0;
	int e = n-1;
	while(s<=e){
		int mid = (s + e)/2;
		if(arr[mid]==x){
			return mid;
		}
		else if(arr[mid]>x){
			e = mid - 1;
		}
		else {
			s = mid + 1;
		}
	}
	return -1;
}

int main() {
	int n;
	cin >> n;
	int arr[100000];
	for(int i=0; i<n; i++){
		cin >> arr[i];
	}
	int t;
	cin >> t;
	for(int i=0; i<t; i++){
		int x;
		cin >> x;
		cout << binarySearch(n, arr, x) <<endl;
	}
}
