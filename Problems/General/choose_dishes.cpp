#include<iostream>
using namespace std;

int choose_maxdishes(int arr[], int n){
	int barr[1001] = {0};
	int x, i;
	int max=0;
	for(i=0; i<n; i++){
		barr[arr[i]]++;
		if(arr[i] == arr[i+1])
			i++;
	}
	
	for(i=1; i<=1000; i++){
		if(barr[i]> max){
			max = barr[i];
			x = i;
		}
	}
	return x;
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

		cout <<	choose_maxdishes(arr, n) << endl;
	}
}
