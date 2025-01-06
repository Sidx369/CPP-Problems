#include<iostream>
using namespace std;

void reverse_word(char str[]){
	int i = 0;
	int start = 0;
	int temp, end;
	while(str[i]!='\0') {
		if(str[i+1]==' ' or str[i+1]=='\0'){
			end = i;
			while(start<end){
				temp = str[start];
				str[start] = str[end];
				str[end] = temp;
				start++;
				end--;
			}
			start = i+2;
			if(str[i+1]=='\0')
				break;
		}
		i++;
	}

	for(int i=0; str[i]!='\0'; i++){
		cout <<	str[i];
	}
}

int main(){
	char str[1000000];
	cin.getline(str, 1000000);

	reverse_word(str);
}
