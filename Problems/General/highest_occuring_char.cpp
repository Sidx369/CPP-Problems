#include<iostream>
using namespace std;

void highest_occuring(char str[]){
	int charac[256] = {0};
	for(int i=0; str[i]!='\0'; i++){
		charac[str[i]]++;
	}
	
	int max = 0, maxi;
	for(int i=0; i<256; i++){
		if(charac[i] > max){
			max = charac[i];
			maxi = i;
		}
	}
	char c = maxi;
	cout << c;
}

int main(){
	char str[1000000];
	cin >> str;

	highest_occuring(str);
}
