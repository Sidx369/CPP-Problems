#include<iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[100];
		int b[100];
		int i;
		int maxa = 0, maxb = 0;
		int counta = 0, countb = 0;
		for(i=0; i<n; i++){
			cin >> a[i];
		}

		for(i=0; i<n; i++){
			cin >> b[i];
		}

		for(i = 0; i<n; i++){
			if(a[i]> maxa)
				maxa = a[i];
			if(b[i]> maxb)
				maxb = b[i];
			counta += a[i];
			countb += b[i];
		}

		int diffa = counta - maxa;
		int diffb = countb - maxb;
		if(diffa == diffb){
			cout << "Draw" << endl;
		} else if (diffa > diffb){
		       cout << "Bob"<< endl;
		}
		else cout << "Alice" << endl;
	}
}
