#include<iostream>
#include<cmath>
using namespace std;

double GeometricSum(int k){
    if(k == 0)
	return 1;

    return GeometricSum(k-1) + 1/pow(2, k);
}

int main(){
    int k;
    cout << "Enter k: " << endl;
    cin >> k;

    cout << GeometricSum(k);
}

