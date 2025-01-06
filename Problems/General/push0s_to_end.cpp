#include<iostream>
using namespace std;

void pushZeros(int n, int arr[]){
	int i = 0;
	int k = 0;
	while(i<=n-1){
		int temp;
		if(arr[i] != 0){
			temp = arr[i];
			arr[i] = arr[k];
			arr[k] = temp;
			k++;
		}
		i++;
	}
}

int main(){
	int t;
	cin >> t;
	for(int i=0; i<t; i++){
		int n;
		cin >> n;
		int arr[100000];

		for(int i=0; i<n; i++){
			cin >> arr[i];
		}

		pushZeros(n, arr);

		for(int i=0; i<n; i++){
			cout << arr[i] << ' ';
		}
		cout << endl;
	}
}
