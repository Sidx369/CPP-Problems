#include<iostream>
using namespace std;

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
		
		int s = 0;
		int e = n-1;
		while(s<e){
			if(arr[s]==0){
				s++;			
			} else if(arr[e]==0){
				arr[s] = 0;
				arr[e] = 1;
				s++;
				e--;
			}

			if(arr[e]==1){
				e--;
			}
		}

		for(int i=0; i<n; i++){
			cout << arr[i] << ' ';
		}

		/*	
		int count0 = 0;
		int count1 = 0;
		for(int i=0; i<n; i++){
			if(arr[i]==0){
				count0++;
			} else{
				count1++;
			}
		}

		for(int i=0; i<count0; i++){
			cout << 0 << ' ';
		}
		for(int i=0; i<count1; i++){
			cout << 1 << ' ';
		}
		*/

		cout << endl;
	}
}
