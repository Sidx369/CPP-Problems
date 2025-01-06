#include<iostream>
#include<math.h>
using namespace std;

float geometric_sum(int k){
	if(k==0)
		return 1;

	return 1/pow(2, k) + geometric_sum(k-1);
		
}

int main(){
	int k;
	cin >> k;
	cout << geometric_sum(k);
}
