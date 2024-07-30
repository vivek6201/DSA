#include<iostream>
#include<string.h>
using namespace std;

bool checkPalindrome(string str, int start, int end){
    if(start > end) return true;

    if(str[start] != str[end]) return false; 

    return checkPalindrome(str, start + 1, end - 1);
}

int main(){
    string str = "babbab";

    if(checkPalindrome(str, 0, str.length() - 1)){
        cout<<"palindrome"<<endl;
    }
    else{
        cout<<"not palindrome"<<endl;
    }

    return 0;
}