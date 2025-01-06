#include<iostream>
using namespace std;

int string_to_int(char s[], int len){
	if(len==1){
		return s[0] - '0';
	}

	int num = string_to_int(s, len-1);

	return num*10 + (s[len-1] - '0');
}

int main(){
	char s[9];
	cin >> s;
	int len=0;

	for(int i=0; s[i]!='\0'; i++){
		len ++;
	}

	cout <<	string_to_int(s, len);
}
