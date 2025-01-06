#include<iostream>
using namespace std;

void print2d(int arr[][100], int n, int m){
	float t = 1/n;
	for(int i=0; i<n; i = i + t){
		for(int j=0; j<m; j++){
			cout << arr[i][j] << ' ';
		}
		cout << endl;
		if(t==1) t--;
		t = t + 1.0/(n-i);
	}
}

int main(){
	int n, m;
	cin >> n >> m;
	int arr[100][100];
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cin >> arr[i][j];
		}
	}

	print2d(arr, n,  m);
}
