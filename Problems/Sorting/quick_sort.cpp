#include<iostream>
using namespace std;

int partition(int arr[], int s, int e){
	int piv = arr[s];
	int count = 0;
	for(int i = s+1; i<=e; i++){
		if(arr[i]<=piv)
			count++;
	}
	
	//swap
	int temp = arr[s+count];
	arr[s+count] = piv;
	arr[s] = temp;
	
	int i=s;
	int j=e;
	while(i<s+count || j>s+count){
		if(arr[i]>piv){
			if(arr[j]<piv){
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
				i++;
				j--;
			} else{
				j--;
			}
		} else {
			i++;
		}
	}

	return s+count;
}

void quick_sort(int arr[], int s, int e){
	if(s>=e){
		return;
	}

	int pivot = partition(arr, s, e);

	quick_sort(arr, s, pivot-1);
	quick_sort(arr, pivot+1, e);
}

int main(){
	int n;
	cin >> n;
	int arr[1000];
	for(int i=0; i<n; i++){
		cin >> arr[i];
	}

	quick_sort(arr, 0, n-1);

	for(int i=0; i<n; i++){
		cout << arr[i] << ' ';
	}
	cout << endl;
}
