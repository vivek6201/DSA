#include<iostream>
using namespace std;

void removeSubstr(string&str, string part, int &index){
    
    if(str.find(part) == string::npos) return;

    str.erase(str.find(part), part.length());

    return removeSubstr(str, part, index);
}

int main(){
    string str = "daabcbaabcbc";
    string part = "abc";
    int index = 1;

    removeSubstr(str, part, index);
    cout<<str<<endl;

    return 0;
}

