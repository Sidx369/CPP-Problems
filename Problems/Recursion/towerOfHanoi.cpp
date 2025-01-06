#include<iostream>
using namespace std;

void TowerOfHanoi(int n, char a, char b, char c){
    if(n == 1){
	cout << a << " -> " << c << endl;
	return;
    }

    TowerOfHanoi(n-1, a, c, b);

    cout << a << " -> " << c << endl;

    TowerOfHanoi(n-1, b, a, c);

    return;
}

int main(){
    int n;
    
    cout << "Enter n: ";
    cin >> n;
    
    char source = 'a', aux = 'b', dest = 'c';

    TowerOfHanoi(n, source, aux, dest);
}

