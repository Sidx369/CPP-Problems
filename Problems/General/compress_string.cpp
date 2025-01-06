#include<iostream>
using namespace std;

void compress(char str[]){
	char compressedString[1000000];
	int count=0, s=0;
	int i = 0, j;
	for(i; str[i]!='\0'; i++){
		for(j=i; str[j]!='\0'; j++){
			if(str[i]==str[j]){
				count++;
			} else break;
		}
		if(count>1){
			compressedString[s] = str[i];
			compressedString[++s]= count + 48;
			count = 0;
			s++;
		} else {
			count = 0;
			compressedString[s] = str[i];
			s++;
		}

		i = j - 1;
	}
	str[s] = '\0';

	for(int i=0; str[i]!='\0'; i++){
		cout << compressedString[i];
	}
}

int main(){
	char str[1000000];
	cin >> str;

	compress(str);
}
