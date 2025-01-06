#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;

	for(int i=1; i<=t; i++){
		int n;
		cin >> n;
		int arr[10000];
		
		int s = 0;
		int e = n - 1;
		int val = 1;
		for(int i=0; i<(n+1)/2; i++){
			arr[s] = val;
			val ++;
			if (s!=e){
				arr[e] = val;
				val ++;
			}
			s++;
			e --;	
		}

		for(int i=0; i<n; i++){
			cout << arr[i] << ' ';
		}
		cout << endl;
	}
}
