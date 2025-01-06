#include<iostream>
using namespace std;

void print_substrings(char word[], int n){
	for(int i=0; i<n; i++){
		int end = i;
		for(int j=i; j<n; j++){
			for(int k=i; k<=end; k++){
				cout << word[k];
			}
			end++;
			cout << endl;
		}
	}
}

int main(){
	char word[1000000];
	cin >> word;
	int n=0;
	for(int i=0; word[i]!='\0'; i++){
		n++;
	}
	print_substrings(word, n);
}
