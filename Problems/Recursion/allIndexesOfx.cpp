#include<iostream>
using namespace std;

int AllIndex(int n, int a[], int x, int ind[]){
    if(n==0)
	return 0;
    
    int count = AllIndex(n-1, a+1, x, ind); 

    for(int i=0; i<count; i++){
        ind[i] = ind[i] + 1;
    }

    if(a[0] == x){
	int temp = 0;
	int temp2 = 0;
	count++;
	for(int i=0; i<count; i++){
	    temp2 = ind[i];
	    ind[i] = temp;
	    temp = temp2;
	}
    }

    return count;
}

int main(){
    int n, x;
    cout << "Enter n: " << endl;
    cin >> n;

    int a[n];

    cout << "Enter n elements:"<< endl;
    for(int i=0; i<n; i++)
	cin >> a[i];

    cout << "Enter x: ";
    cin >> x;
    
    int ind[n] = {-1};
    int count = AllIndex(n, a, x, ind);
    cout << count << endl;
    
    for(int i=0; i<count; i++)
	cout << ind[i];
}

