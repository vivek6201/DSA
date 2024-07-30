#include<iostream>
#include<vector>
using namespace std;

void printAllOccurrences(int *arr, int size, int index, int target, vector<int> &ans){
    if(index >= size) return;

    if(arr[index] == target) ans.push_back(index);

    return printAllOccurrences(arr, size, index + 1, target, ans);
}

int main(){
    int arr[] = {10,20, 10, 20, 10, 50};
    int size = 6;
    int target = 10;
    vector<int> ans;
    printAllOccurrences(arr, size, 0, target, ans);

    for(auto num:ans){
        cout<<num<<" ";
    }

    return 0;
}