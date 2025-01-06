#include<iostream>
using namespace std;

int main(){
	int t;
	cin >> t;
	for(int i=0; i<t; i++){
		int n;
		cin >> n;
		int arr1[100000];
		int arr2[100000];
		for(int i=0; i<n; i++){
			cin >> arr1[i];
		}

		int m;
		cin >> m;
		for(int i=0; i<m; i++){
			cin >> arr2[i];
		}

		for(int i=0; i<n; i++){
			for(int j=0; j<m; j++){
				if(arr1[i] == arr2[j]){
					cout << arr1[i];
					arr2[j] = INT_MIN;
					break;
				}
			}
		}
		cout << endl;
	}
}
