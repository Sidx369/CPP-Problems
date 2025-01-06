#include<iostream>
using namespace std;

void merge(int arr[], int s, int e){
	int arr2[e-s+1];
	int s1 = s;
	int s2 = (s+e)/2 + 1;
	int i=0;
	while(s1<=(s+e)/2 && s2<=e){
		if(arr[s1] < arr[s2]){
			arr2[i++] = arr[s1++];
		} else {
			arr2[i++] = arr[s2++];
		}
	}

	while(s1<=(s+e)/2){
		arr2[i++] = arr[s1++];
	}
	while(s2<=e){
		arr2[i++] = arr[s2++];
	}
	
	for(int i=s, j=0; i<=e; i++, j++){
		arr[i] = arr2[j];
	}
}

void merge_sort(int arr[], int s, int e){
	if(s >= e)
		return;

	merge_sort(arr, s, (s+e)/2);
	merge_sort(arr, (s+e)/2 + 1, e);

	merge(arr, s, e);

	return;
}

int main(){
	int n;
	cin >> n;
	int arr[1000];
	for(int i=0; i<n; i++){
		cin >> arr[i];
	}
	int s = 0, e = n-1;
	merge_sort(arr, s, e);
	
	for(int i=0; i<n; i++){
		cout << arr[i] << ' ';
	}
}
