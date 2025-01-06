#include<iostream>
using namespace std;

void pair_star(char s[]){
	if(s[1]=='\0'){
		return;
	}

	pair_star(s+1);

	if(s[0]==s[1]){
		int len=0;
		for(int i=0; s[i]!='\0'; i++){
			len++;
		}

		for(int i=len+1; i>0; i--){
			s[i+1] = s[i];
		}
		s[1] = '*';
	}
}

int main(){
	char s[1000];
	cin >> s;

	pair_star(s);

	cout << s;
}
