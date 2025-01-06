#include<iostream>
using namespace std;

int power(int x, int n){
    if(n == 0)
	return 1;
    
    int smallPower = power(x, n-1);
    return smallPower * x;
}

int main(){
    int x, n;
    cout << "Enter x and n" << endl;
    cin >> x >> n;
    cout << power(x, n) << endl;
}

