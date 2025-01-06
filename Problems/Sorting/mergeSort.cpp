#include<iostream>
using namespace std;

void Merge(int a[], int start, int end){
    int mid = (end + start)/2;

    int tempA[end - start + 1];
    
    int i = start;
    int j = mid + 1;
    int k = 0;
    while(i < mid + 1 && j < end + 1){
	if(a[i] < a[j]){
	    tempA[k] = a[i];
	    i++;
	}
	else {
	    tempA[k] = a[j]; 
	    j++;
	}
	k++;
    }

    while(i < mid + 1)
	tempA[k++] = a[i++];
    while(j < end + 1)
	tempA[k++] = a[j++];
    
    for(int i = start, k = 0; i<end+1; i++, k++){
	a[i] = tempA[k];
    }
}

void Merge_Sort(int a[], int start, int end){
    if(start >= end)
	return;
    
    int mid = (end + start)/2;
    Merge_Sort(a, start, mid);

    Merge_Sort(a, mid + 1, end);

    Merge(a, start, end);
}

int main(){
    int a[100];
    int n;
    
    cout << "input length: ";
    cin >> n;

    cout << "Input array: " << endl;
    for(int i=0; i<n; i++)
	cin >> a[i];

    Merge_Sort(a, 0, n-1);
    
    for(int i=0; i<n; i++)
	cout << a[i] << ' ';

}

