#include<iostream>
#include<cmath>
using namespace std;

int SubsetArray(int n, int a[], int output[][50]){
    if(n == 0){
	output[0][0] = 0;
	return 1;
    }

    int rows = SubsetArray(n - 1, a+1, output);

    for(int i=0; i < rows; i++){
	output[rows + i][0] = output[i][0] + 1;
	output[rows + i][1] = a[0];
	for(int j=0; j < output[i][0]; j++)
	    output[rows + i][j+2] = output[i][j+1];
    }

    return rows*2;
}

int main(){
    int n;
    cin >> n;

    int a[n];
    for(int i=0; i<n; i++)
	cin >> a[i];
    
    int output[50][50];
    int rows = SubsetArray(n, a, output);

    for(int i=0; i < rows; i++){
	if(output[i][0] == 0){
	    cout << " " << endl;
	    continue;
	}

	for(int j=0; j<output[i][0]; j++)
	    cout << output[i][j + 1] << " ";
	
	cout << endl;
    }
}

