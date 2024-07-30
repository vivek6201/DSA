#include<iostream>
#include<vector>
using namespace std;

void doubleValue(vector<int> &arr, int index){
    if(index > arr.size()) return ;

    arr[index] = 2 * arr[index];

    return doubleValue(arr, index + 1);
}

int main(){
    vector<int> arr = {10,20, 30, 40, 50};

    doubleValue(arr, 0);

    for(auto num:arr){
        cout<<num<< " ";
    }

    return 0;
}