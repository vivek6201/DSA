#include<iostream>
#include<vector>
using namespace std;

void storeDigits(int &num, vector<int> &ans){
    if(num <= 0){
        return;
    }

    int digits = num % 10;
    num /= 10;

    storeDigits(num, ans);
    ans.push_back(digits);
}

int main(){
    int num = 4321;
    vector<int> ans;

    storeDigits(num, ans);

    for(int num:ans){
        cout<<num<<" ";
    }

    return 0;
}