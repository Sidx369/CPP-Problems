#include<iostream>
using namespace std;

int Partition(int a[], int s, int e){
    int x = a[s];
    int i = s;
    int countLess = 0;

    while(i <= e){
	if(a[i] < x)
	    countLess++;
	i++;
    }
    
    int xPos = countLess + s;
    int temp = a[xPos];
    a[xPos] = x;
    a[s] = temp;
    
    i = s;
    int j = e;

    while(i < xPos && j > xPos){
	if(a[i] < x)
	    i++;
	else if(a[j] > x)
	    j--;
	else {
	    temp = a[i];
	    a[i] = a[j];
	    a[j] = temp;
	    i++;
	    j--;
	}
    }

    return xPos;
}

void QuickSort(int a[], int s, int e){
    if(s >= e)
	return;

    int p = Partition(a, s, e);
    //cout << p;

    QuickSort(a, s, p-1);
    QuickSort(a, p+1, e);
}

int main(){
    int n;
    cout << "Enter n: ";
    cin >> n;

    int a[n];
    int i = 0;

    while(i < n){
	cin >> a[i];
	i++;
    }

    QuickSort(a, 0, n-1);
    
    i = 0;
    while(i < n){
	cout << a[i] << " ";
	i++;
    }
}

