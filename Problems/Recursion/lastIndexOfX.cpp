#include<iostream>
using namespace std;

int lastIndex(int n, int a[], int x){
    if(n== 0)
	return -1;
    
    int smallLastIndex = lastIndex(n-1, a+1, x);

    if(smallLastIndex != -1)
	return smallLastIndex + 1;
    else if(a[0] == x)
	return 0;
    else
	return smallLastIndex;
}

int main(){
    int n, x;
    cout << "Enter n: ";
    cin >> n;
    cout << "Enter " << n << " elements:" << endl;
    
    int a[n];
    for(int i=0; i<n; i++)
     cin >> a[i];

    cout << "Enter x: ";
    cin >> x;

    cout << lastIndex(n, a, x);
}

