#include<iostream>
using namespace std;

bool check_palindrome(char str[]){
	bool isPalindrome = true;
	int length = 0;
	for(int i=0; str[i]!='\0'; i++){
		length ++;
	}
	int j = length-1;
	for(int i=0; i<=length/2; i++, j--){
		if(str[i]!=str[j]){
			isPalindrome = false;
			break;
		}
	}
	return isPalindrome;
}

int main(){
	char str[100000];
	cin >> str;
	if(check_palindrome(str)){
	       cout << "true";
	 } else cout << "false";
}
