#include<iostream>
using namespace std;

void printArr(int *arr, int size, int index){
    if(index >= size) return;

    cout<<arr[index]<<" ";

    printArr(arr, size, index + 1);
}

int main(){
    int arr[] = {10, 20, 30, 40, 50};
    int size = 5;
    int index = 0;

    printArr(arr, size, index);
}