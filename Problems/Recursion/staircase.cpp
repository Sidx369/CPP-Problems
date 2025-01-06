#include<iostream>
using namespace std;

int StaircaseWays(int n){
    if(n == 1 || n == 0)
	return 1;
    else if(n < 0)
	return 0;

    int x = StaircaseWays(n - 1); //for 1 step
    int y = StaircaseWays(n - 2); //for 2 steps
    int z = StaircaseWays(n - 3); //for 3 steps

    return x+y+z;
}

int main(){
    int n;
    cin >> n;

    cout << StaircaseWays(n);
}

