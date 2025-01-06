#include<iostream>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int count = 0;
		for(int i=2; i<=n; i++){
			int rem = 0;
			int q = n;
			while(q!=0){
				rem = q % i;
				q = q / i;
			}
			if(rem==1)
				count++;
		}

		cout << count << endl;
	}
}
