#include<iostream>
using namespace std;

int KeypadCombinations(int input, string output[], string keypad[]){
    if(input == 0 || input == 1){
	output[0] = "";
	return 1;
    }

    int smallCombLen = KeypadCombinations(input/10, output, keypad);
    
    string keypadString = keypad[input%10];
    
    for(int i = keypadString.size(), k = keypadString.size() * smallCombLen - 1; i > 0; i--){
	for(int j = smallCombLen; j > 0; j--)	
	    output[k--] = output[j-1] + keypadString[i-1];
    }

    return keypadString.size() * smallCombLen;
}

int main(){
    int input;
    cin >> input;

    string keypad[10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    string output[1000];

    int combinations = KeypadCombinations(input, output, keypad);
    
    for(int i = 0; i < combinations; i++)
	cout << output[i] << endl;
}

