#include<iostream>
using namespace std;

void sine_wave(int arr[][1000], int n, int m){
	for(int i=0; i<m; i++){
		if(i%2==0){
			for(int j=0; j<n; j++){
				cout << arr[j][i] << ' ';
			}
		} else {
			for(int j=n-1; j>=0; j--){
				cout << arr[j][i] << ' ';
			}	
		}
	}
	cout << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, m;
		cin >> n;
		cin >> m;
		int arr[100][1000];
		for(int i=0; i<n; i++){
			for(int j=0; j<m; j++){
				cin >> arr[i][j];
			}
		}

		sine_wave(arr, n, m);	
	}
}
