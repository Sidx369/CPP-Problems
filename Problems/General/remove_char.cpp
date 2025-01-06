#include<iostream>
using namespace std;

void remove_char(char str[], char x){
	int s = 0;
	for(int i=0; str[i]!='\0'; i++){
		if(str[i]!=x){
			str[s] = str[i];
			s++; 
		}
	}
	str[s]='\0';

	for(int i=0; str[i]!='\0'; i++){
		cout << str[i];
	}
}

int main(){
	char str[1000000];
	cin >> str;
	char x;
	cin >> x;

	remove_char(str, x);
}
