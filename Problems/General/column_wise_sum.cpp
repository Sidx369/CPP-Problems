#include<iostream>
using namespace std;

int main(){
	int m, n;
	cin >> m >> n;
	
	int arr[100][1000];
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			cin >> arr[i][j];
		}
	}
	
	int sumArr[n];
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			sumArr[j] += arr[i][j];
		}
	}

	for(int i=0; i<n; i++){
		cout << sumArr[i] << ' ';
	}
}
