#include<iostream>
#include<vector>
using namespace std;

void print(vector<int> &arr, int start, int end){
    if(end >= arr.size()) return;

    for(int i = start; i <= end; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    print(arr, start, end + 1);
}

void printAll(vector<int> &arr){
    for(int i = 0; i<arr.size(); i++){
        int end = i;

        print(arr, i, end);
    }
}

int main(){
    vector<int> arr = {1,2,3,4,5};

    printAll(arr);
    return 0;
}