#include<iostream>
using namespace std;

// NOT COMPLETE, TO DO
bool CheckAB(string ab, int len){
    bool result = false;
    if(len == 1){
	if(ab[0] == 'a')
	    return true;
	else
	    return false;
    }

    //cout << "1" << " " << result << " " << ab << " " << len;

    if(CheckAB(ab.substr(0, len-1), len-1) == false)
	return false;
    else {
	if(ab[len-1] == 'a'){
	    if(ab[len-2] == 'a' || ab.substr(len-3, 2) == "bb")
		result = true;
	    else 
		result = false;
	}
	else if(ab.substr(len-2, 2) == "bb"){
	    if(ab[len-3] == 'a')
		result = true;
	    else 
		result = false;
	}
    }

    //cout << "2" << " " << result << " " << ab << " " << len;

    return result;
}

int main(){
    string ab;
    cin >> ab;

    CheckAB(ab, ab.size()) == 0 ? cout << "false" : cout << "true";
}

