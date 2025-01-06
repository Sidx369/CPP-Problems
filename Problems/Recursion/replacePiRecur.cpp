#include<iostream>
using namespace std;

void ReplacePi(char piString[], int length){
    if(length == 1)
	return;

    ReplacePi(piString+1, length-1);

    if(piString[0] == 'p' && piString[1] == 'i'){
	char temp = '&';
	int length = 0;

	while(piString[length]!='\0')
	    length++;

	for(int i=length; i>1; i=i-1){
	    temp = piString[i];
	    piString[i+2] = temp;
	}

	piString[0] = '3';	
	piString[1] = '.';
	piString[2] = '1';
	piString[3] = '4';
    }
}

int main(){
    char s[1000];
    cout << "Input string: ";
    cin >> s;
    
    int i = 0;
    while(s[i] != '\0')
	i++;

    ReplacePi(s, i);

    cout << s;
}

