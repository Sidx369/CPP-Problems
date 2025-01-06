#include<iostream>
using namespace std;

void min_len(char str[]){
	int s = 0, e = 0, count = 0, min = 100000;
	for(int i=0; str[i]!='\0'; i++){
		if(str[i]==' '){
			if(count<min){
				min = count;
			       	s = i-count;	
				e = i-1;
			}
			count = -1;
		}
		if(str[i+1]=='\0'){
			count++;
			if(count<min){
				min = count;
			       	s = i-count+1;	
				e = i;
			}
			count = -1;
		}
		count ++;
	}

	for(int i=s; i<=e; i++){
		cout << str[i];
	}
}

int main(){
	char s[100000];
	cin.get(s, 100000);
	min_len(s);
}
