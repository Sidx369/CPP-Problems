#include<iostream>
using namespace std;

int firstIndex(int n, int a[], int x){
    if(n == 0)
	return -1;

    if(a[0] == x)
	return 0;
    
    if(firstIndex(n-1, a+1, x) < 0)
	return -1;
    else
	return firstIndex(n-1, a+1, x) + 1;
}


int main(){
    int n, x;

    cout << "Enter n: ";
    cin >> n;
    cout << "Enter " << n << " elements: " << endl;
    int a[n];
    for(int i=0; i<n; i++)
	cin >> a[i];
    
    cout << "Enter element x: ";
    cin >> x;

    cout << firstIndex(n, a, x);
}

