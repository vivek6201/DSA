#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;

void revStr(string& str, int start, int end){
    if(start >= end){
        return;
    }

    swap(str[start], str[end]);

    return revStr(str, start+1, end-1);
}

int main(){
    string str = "rahul";
    revStr(str, 0, str.length() - 1);
    cout<<"the rev string is: "<<str;

    return 0;
}
