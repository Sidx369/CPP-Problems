#include<iostream>
using namespace std;

int SubsetSumToK(int n, int a[], int k, int output[][20]){
    if(n == 0)
	return 0;
    
    if(k - a[0] == 0){
	output[0][0] = 1;
        output[0][1] = a[0];
        return 1;
    }
    
    cout << "k: " << k;

    int outputInc[20][20]; 
    int outputExc[20][20]; 
    int lenInc;
    if(k - a[0] > 0)
	lenInc = SubsetSumToK(n - 1, a+1, k-a[0], outputInc);
    int lenExc = SubsetSumToK(n - 1, a+1, k, outputExc);
    
    //cout << "inc" << lenInc << " n: " << n << endl;
    //cout << "exc" << lenExc << " n: " << n << endl;

    if(lenInc > 0){
	for(int i = 0; i < lenInc; i++){
	    output[i][0] = outputInc[i][0] + 1;
	    int len = output[i][0]; 
	    output[i][1] = a[0];
	    for(int j=2; j < len + 1; j++)
		output[i][j] = outputInc[i][j-1];
	}
    }
    
    if(lenExc > 0){
	for(int i = lenInc; i < lenInc + lenExc; i++){
	    output[i][0] = outputExc[i][0];
	    int len = output[i][0]; 
	    for(int j=1; j < len; j++)
		output[i][j] = outputExc[i][j];
	} 
    }
    		
    return lenInc + lenExc;
}

int main(){
    int n, k, l;
    int output[20][20]; 

    cin >> n;
    
    int a[n]; 
    cout << "Elements: ";
    for(int i=0 ; i<n; i++)
	cin >> a[i];

    cout << "Enter k: ";
    cin >> k;

    int len = SubsetSumToK(n, a, k, output);
    
    for(int i=0 ; i<len; i++){
	for(int j=0; j<output[i][0]; j++)
	    cout << output[i][j+1] << " ";
	cout << endl;
    }
}

