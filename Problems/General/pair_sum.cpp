#include<iostream>
using namespace std;

int main(){
	int t;
	cin >> t;
	for(int i=0; i<t; i++){
		int n;
		cin >> n;
		int arr[1000];
		for(int i=0; i<n; i++){
			cin >> arr[i]; 
		}
		
		int x;
		cin >> x;
		int count = 0;
		for(int i=0; i<n-1; i++){
			for(int j=i+1; j<n; j++){
				if(arr[i]+arr[j]==x){
					count++;
				}
			}
		}
		cout << count << endl;
	}
}
