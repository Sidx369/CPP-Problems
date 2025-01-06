#include<iostream>
using namespace std;

bool check_anagram(char s1[], char s2[]){
	int lens1 = 0, lens2 = 0;
	for(int i=0; s1[i]!='\0'; i++){
		lens1++;
	}

	for(int i=0; s2[i]!='\0'; i++){
		lens2++;
	}

	if(lens1!=lens2) return false;

	int charlist[256] = {0};
	for(int i=0; i<lens1; i++){
		charlist[s1[i]-1]+=1;
	}
	for(int i=0; i<lens2; i++){
		charlist[s1[i]-1]-=1;
	}

	for(int i=0; i<256; i++){
		if(charlist[i]!=0) return false;
	}

	return true;

}

int main(){
	int t;
	cin >> t;
	while(t--){
		char s1[1000], s2[1000];
		cin >> s1 >> s2;

		cout << check_anagram(s1, s2) << endl;
	}
}
