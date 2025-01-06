#include<iostream>
using namespace std;

void PrintNums(int n){
    if(n == 1){
	cout << n << ' ';
	return;
    }
    
    PrintNums(n -1);
    cout << n << ' ';
    return;
}

int main(){
    cout << "Enter number n" << endl;
    int n;
    cin >> n;
    PrintNums(n);
}

