#include<iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	char ch = 'A' + n - 1;
	char lt = ch;
 	int i = 1;

  	while(i<=n) {
		int j = 1;
    		while(j<=i) {
  			lt = ch - i + j;
			cout << lt;
			j++;
		}
		cout << endl;
		i++;
  	} 
}
