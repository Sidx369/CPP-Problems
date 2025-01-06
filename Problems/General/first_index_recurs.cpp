#include<iostream>
using namespace std;

int first_index(int n, int arr[], int x){
	if(n == 0)
		return -1;

	if(arr[0] == x)
		return 0;
	int ind = first_index(n-1, arr+1, x);

	if (ind!=-1)
		return ind+1;
	else
		return ind;

}

int main(){
	int n, x;
	cin >> n;
	int arr[1000];
	for(int i=0; i<n; i++){
		cin >> arr[i];
	}

	cin >> x;

	cout << first_index(n, arr, x);
}
