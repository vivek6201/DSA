#include<iostream>
#include<string.h>
using namespace std;

int findLastOcc(string str, int index, int &ans, char target){
    if(index >= str.length())
        return ans;

    if(str[index] == target){
        ans = index;
    }

    return findLastOcc(str, ++index, ans, target);
}

int main(){
    string str = "abbbcdddq";
    char target = 'y';
    int ans = -1;
    ans = findLastOcc(str, 0, ans, target);

    if(ans != -1){
        cout<<"the last index is: "<<ans;
    }else{
        cout<<"target character not found";
    }

    return 0;
}