#include<iostream>
using namespace std;

void sort012(int arr[], int n){
	int zeros = 0, i = 0, twos = n-1, temp = 0;
	while(i<=twos){
		if(arr[i] == 0){
			temp = arr[zeros];
			arr[zeros] = arr[i];
			arr[i] = temp;
			zeros++;
		} else if (arr[i] == 2){
			temp = arr[twos];
			arr[twos] = arr[i];
			arr[i] = temp;
			twos--;
			i --;
		}
		i++;
	}
	/*
	if(arr[twos] == 0){
		temp = arr[zeros];
		arr[zeros] = arr[twos];
		arr[twos] = temp;
	}*/
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int arr[100000];
		for(int i=0; i<n; i++){
			cin >> arr[i];
		}

		sort012(arr, n);

		for(int i=0; i<n; i++){
			cout << arr[i] << ' ';
		}

		cout << endl;
	}
}
