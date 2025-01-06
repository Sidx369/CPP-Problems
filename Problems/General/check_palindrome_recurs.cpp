#include<iostream>
using namespace std;

bool check_palindrome(char s[], int start, int end){
	if(start == end)
		return true;
	
	if(s[start]!=s[end])
		return false;

	bool isPalindrome = check_palindrome(s, start+1, end-1);

	return isPalindrome;
}

int main(){
	char s[1000];
	cin >> s;
	
	int len = 0, i = 0;
	while(s[i]!='\0'){
		len++;
		i++;
	}
	cout << check_palindrome(s, 0, len-1);
}
