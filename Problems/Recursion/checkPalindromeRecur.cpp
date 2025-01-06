#include<iostream>
using namespace std;

bool checkPalind(char s[], int start, int end){
    if(start == end)
	return true;

    if(s[start] == s[end])
	return checkPalind(s, start+1, end-1);
    else
	return false;
}

int main(){
    char s[1000];
    cout << "Input string: ";
    cin >> s;
    
    int i=0;
    while(s[i]!='\0')
	i++;

    if(checkPalind(s, 0, i-1) == 1)
	cout << "True";
    else
	cout << "False";
}

