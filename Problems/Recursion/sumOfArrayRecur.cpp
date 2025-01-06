#include<iostream>
using namespace std;

int SumOfArray(int n, int a[]){
    if(n == 1)
	return a[0];

    int shortSum = SumOfArray(n-1, a+1);

    return shortSum + a[0];

}

int main(){
    int n;
    cout << "Enter n, length of array: ";
    cin >> n;
    int a[n];
    cout << "Enter " << n << "elements:" << endl;
    for(int i=0; i<n; i++){
	cin >> a[i];
    }
    
    cout << SumOfArray(n, a) << endl;
}
