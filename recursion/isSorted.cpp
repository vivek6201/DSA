#include<iostream>
using namespace std;

bool isSorted(int *arr, int size, int index){
    if(index + 1 > size){
        return true;
    }

    if(arr[index] > arr[index + 1]){
        return false;
    }

    return isSorted(arr, size, index + 1);
}

int main(){
    int arr[] = {10, 10, 0, 10, 10};
    int size = 5;
    bool ans = isSorted(arr, size, 0);

    cout<<ans<<endl;
    return 0; 
}