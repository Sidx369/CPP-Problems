#include<iostream>
using namespace std;

void remove_duplicates(char s[]){
	if(s[1]=='\0')
		return;

	if(s[0]==s[1]){
		for(int i=1; s[i]!='\0'; i++){
			s[i] = s[i+1];
		}
		remove_duplicates(s);
	} else {
		remove_duplicates(s+1);
	}
	return;
}

int main(){
	char s[1000];
	cin >> s;

	remove_duplicates(s);

	cout << s;
}
