#include<iostream>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int arr1[100000];
		for(int i=0; i<n; i++){
			cin >> arr1[i];
		}
		
		int m;
		cin >> m;
		int arr2[100000];
		for(int i=0; i<m; i++){
			cin >> arr2[i];
		}

		int i = n-1, j = m-1, jth, ith, sum = 0, carry = 0;
		int k = i > j ? i+1 : j+1;
		int arr3[100000];
		for(int l = k;l>=0; l--){
			if (j>=0) {
				jth = arr2[j];
			} else {jth = 0;}
			if (i>=0) {
				ith = arr1[i];
			} else{ ith = 0;}
			sum = ith + jth + carry;
			arr3[l] = sum % 10;
			carry = sum/10;
			//cout << l;
			//cout << arr3[l];
			i--;
			j--;
		}

		for(int i=0; i<=k; i++){
			cout << arr3[i] << ' ';
		}
		cout << endl;
	}
}
