#include<iostream>
using namespace std;

int Multiply(int m, int n){
    if(n == 0)
	return 0;

    return m + Multiply(m, n-1);
}

int main(){
    
    int m,n;
    cout << "Enter m, n: " << endl;
    cin >> m >> n;

    cout << Multiply(m, n);
}

