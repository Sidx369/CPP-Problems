#include<iostream>
using namespace std;

void ReverseWordWise(char words[], int len){
	int temp;
	for(int i=0, j=len-1; i<len/2; i++){
		temp = words[i];
		words[i] = words[j];
		words[j] = temp;
		j--;
	}
	int start = 0;
	int end = 0;
	for(int i=0; i<len; i++){
		if(words[i+1] == ' ' || i==len-1){
			for(end=i; start<end; end--, start++){		
				temp = words[start];
				words[start] = words[end];
				words[end] = temp;
			}
			if(i!=len-1){
				words[i+1] = ' ';
				start = i+2;
			}
		}
	}

	/* Alternate implementation - using another char array
	int end = len-1;
	char  revWords[len];
	int k = 0;
	for(int i=len-1; i>=0; i--){
		if(words[i-1]==' ' || i==0){
			for(int j=i; j<=end; j++){
				revWords[k] = words[j];
				k++;
			}
			end = i-2;
			if(i!=0){
				revWords[k] = ' ';
				k++;
			}
		}
	}

	cout << revWords << endl;
	*/
}

int main(){
	char words[1000000];
	cin.getline(words, 1000000);
	int count = 0;
	for(int i = 0; words[i]!='\0'; i++){
		count ++;
	}

	ReverseWordWise(words, count);
	
	for(int i = 0; i<count; i++){
		cout << words[i];
	}
}
