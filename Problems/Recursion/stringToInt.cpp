#include<iostream>
#include<cmath>
using namespace std;

int StringToInt(char a[], int len){
    if(len == 1) 
	return a[0] - 48;

    int currInt = StringToInt(a+1, len-1);
    return pow(10, len-1) * (a[0] - 48) + currInt; 
}

int main(){
    char a[10];

    cout << "Enter the string: ";
    cin >> a;
    
    int len = 0;
    while(a[len] != '\0')
	len++;

    cout << StringToInt(a, len);
}

