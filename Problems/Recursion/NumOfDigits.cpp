#include<iostream>
using namespace std;

int NumOfDigits(int n){
    if(n / 10 < 1)
	return 1;
    
    int prevNum = NumOfDigits(n/10);
    return prevNum+1;
}

int main(){
    cout << "Enter n" << endl;
    int n;
    cin >> n;
    cout << NumOfDigits(n) <<endl;
}

