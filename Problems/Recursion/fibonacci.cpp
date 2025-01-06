#include<iostream>
using namespace std;

int Fibo(int n){
    if(n==0)
	return 0;
    if(n==1)
	return 1;
    
    int fibon1 = Fibo(n-1);
    int fibon2 = Fibo(n-2);

    return fibon1 + fibon2;
}

int main(){
    int n;
    cout << "Enter n:" << endl;
    cin >> n;
    cout << Fibo(n) << endl;
}

