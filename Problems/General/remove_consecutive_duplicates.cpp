#include<iostream>
using namespace std;

void remove_dups(char str[]){
	int j = 0;
	for(int i=1; str[i]!='\0'; i++){
		if(str[i]!=str[j]){
			str[j+1] = str[i];
			j++;
		}
	}
	str[j+1] = '\0';
}

int main(){
	char str[1000000];
	cin >> str;

	remove_dups(str);
	
	for(int i=0; str[i]!='\0'; i++){
		cout << str[i];
	}
}
