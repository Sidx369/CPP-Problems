#include<iostream>
using namespace std;

void largest(int arr[][1000], int n, int m){
	int sum = 0;
	char rcString = 'r';
	int max = INT_MIN;
	int rorc = 0;

	//for row
	for(int i=0; i<n; i++){
		sum = 0;
		for(int j=0; j<m; j++){
			sum+=arr[i][j];
		}

		if (sum>max) {
			max = sum;
			rorc = i;
			rcString = 'r';
		}
	}

	//for column 
	for(int i=0; i<m; i++){
		sum = 0;
		for(int j=0; j<n; j++){
			sum+=arr[j][i];
		}

		if (sum>max) {
			max = sum;
			rorc = i;
			rcString = 'c';
		}
	}
	
	if(rcString=='r')
		cout << "row" << ' ' << rorc << ' ' << max << endl;
	else
		cout << "column" << ' ' << rorc << ' ' << max << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, m;
		cin >> n >> m;
		int arr[100][1000];

		for(int i=0; i<n; i++){
			for(int j=0; j<m; j++){
				cin >> arr[i][j];
			}
		}

		largest(arr, n, m);
	}
}
