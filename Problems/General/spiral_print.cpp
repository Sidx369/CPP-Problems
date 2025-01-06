#include<iostream>
using namespace std;

void print_spiral(int arr[][1000], int n, int m) {
	int i, k = 0, l = 0;
	
	/* k - starting row index
	   m - ending column index
	   l - starting column index
	   n - ending row index
	*/

	while(k < n && l < m){
		for(int i=l; i<m; i++){
			cout << arr[k][i] << ' ';
		}
		k++;

		for(int i=k; i<n; i++){
			cout << arr[i][m-1] << ' ';
		}
		m--;
		
		if(k<n){
			for(int i=m-1; i>=l; i--){
				cout << arr[n-1][i] << ' ';
			}
			n--;
		}
		
		if(l < m){
			for(int i=n-1; i>=k; i--){
				cout << arr[i][l] << ' ';
			}
		l++;
		}
	}

	cout << endl;
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

		print_spiral(arr, n, m);
	}
}
