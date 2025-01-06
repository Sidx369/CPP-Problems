#include<iostream>
using namespace std;

int all_indexes(int n, int arr[], int x, int output[]){
	if(n==0){
		return 0;
	}

	int no = all_indexes(n-1, arr, x, output);
        if(arr[n-1]==x){
       		*(output + no) = n-1;
		return no+1;
	} else
		return no;

}

int all_indexes2(int n, int arr[], int x, int output[]){
	if(n==0){
		return 0;
	}

	int no = all_indexes2(n-1, arr+1, x, output);
	for(int i=0; i<no; i++){
		output[i]++;
	}
	
	if(arr[0]==x){
		for(int i=no-1; i>=0; i--){
			output[i+1] = output[i];
		}
		output[0] = 0;
		return no+1;
	} else
		return no;

}

int main(){
	int n, x;
	cin >> n;
	int arr[1000];
	for(int i=0; i<n; i++){
		cin >> arr[i];
	}
	cin >> x;
	
	int output[n];

	int nos = all_indexes(n, arr, x, output);
	for(int i=0; i<nos; i++){
		cout << output[i] << ' ';
	}

	cout << endl;

	int output2[n];
	int nos2 = all_indexes2(n, arr, x, output2);
	for(int i=0; i<nos2; i++){
		cout << output2[i] << ' ';
	}
}
