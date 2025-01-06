#include<iostream>
using namespace std;

void PrintKeypad(int n, string output, string keypad[]){
    if(n == 0 || n == 1){
	cout << output << endl;
	return;
    }
    
    string keyString = keypad[n%10];
    if(keyString == "")
	PrintKeypad(n/10, output, keypad);

    for(int i=0; i< keyString.size(); i++){
	PrintKeypad(n/10, keyString[i] + output, keypad);
    }
}

int main(){
    int n;
    cin >> n;

    string keypad[10] = {"", "","abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    
    PrintKeypad(n, "", keypad);
}
