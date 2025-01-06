#include<iostream>
using namespace std;

void PrintSubset(int a[], int inputSize, int output[], int outputSize){
    if(inputSize == 0) {
	for(int i = 0; i < outputSize; i++)
	    cout << output[i] << " ";
	cout << endl;
	return;
    }
    
    PrintSubset(a+1, inputSize-1, output, outputSize);
    
    output[outputSize] = a[0];
    PrintSubset(a+1, inputSize-1, output, outputSize+1);
}

int main(){
    int n;
    cin >> n;
    
    int output[n];
    int a[n];
    for(int i=0; i<n; i++)
	cin >> a[i];

    PrintSubset(a, n, output, 0);
}

