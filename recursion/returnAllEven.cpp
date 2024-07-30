#include<iostream>
#include<vector>
using namespace std;

void allEven(vector<int> &arr, int index, vector<int> &ans){
    if(index >= arr.size())
        return;

    if(arr[index] % 2 == 0){
        ans.push_back(arr[index]);
    }

    return allEven(arr, index + 1, ans);
}

int main(){
    vector<int> arr = {22,33,44,55,66};
    int index = 0;
    vector<int> ans;

    allEven(arr, index, ans);

    for(int i=0; i< ans.size(); i++){
        cout<<ans[i]<<" ";
    }

    return 0;
}