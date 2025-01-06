#include<iostream>
using namespace std;

bool IfNoIsPresent(int n, int a[], int x){
    if(n==0)
	return false;
    
    if(a[0] == x)
	return true;

    return IfNoIsPresent(n-1, a+1, x);
}

int main(){
    int n, x;
    cout << "Enter size of array:";
    cin >> n;
    cout << "Enter " << n << " elements:";
    int a[n];
    for(int i=0; i<n; i++)
	cin >> a[i];

    cout << "Enter number to check";
    cin >> x;

    cout << IfNoIsPresent(n, a, x);
}

