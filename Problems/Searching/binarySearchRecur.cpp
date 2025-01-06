#include<iostream>
using namespace std;

int BinarySearch(int start, int end, int a[], int elem){
    if (end < start)
	return -1;
    
    int mid = (end + start)/2;
    if(a[mid] == elem)
	return mid;
    else if(a[mid] > elem)
	return BinarySearch(start, mid-1, a, elem);
    else
	return BinarySearch(mid + 1, end, a, elem);
    
    return -1;
}

int main(){
    int n, elem;
    cin >> n;

    int a[n];
    cout << "Enter elements: ";
    for(int i=0; i<n; i++)
	cin >> a[i];

    cout << "Enter element to search: ";
    cin >> elem;

    cout << BinarySearch(0, n-1, a, elem);
}

