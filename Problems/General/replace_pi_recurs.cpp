#include<iostream>
using namespace std;

void replace_pi(char s[]){
	if(s[1] == '\0')
		return;

	replace_pi(s+1);

	int len=0;
	for(int i=0; s[i]!='\0'; i++){
		len++;
	}

	if(s[0]=='p' && s[1]=='i'){
		for(int i=len; i>=0; i--){
			s[i+2] = s[i];
		}
		s[0]='3';
		s[1]='.';
		s[2]='1';
		s[3]='4';
	}

	return;
}

int main(){
	char s[100];
	cin >> s;

	replace_pi(s);
	cout << s;
}
