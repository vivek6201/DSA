#include<iostream>
#include<limits.h>
using namespace std;

int findMin(int *arr, int size, int index, int ans) {
    if(index > size) return ans;

    if(arr[index] < ans) ans = arr[index];

    return findMin(arr, size, index + 1, ans);
}

int findMax(int *arr, int size, int index, int ans) {
    if(index > size) return ans;

    if(arr[index] > ans) ans = arr[index];

    return findMax(arr, size, index + 1, ans);
}

int main(){
    int arr[] = {1, 10, 55, 22, 11, 0};
    int size = 5;
    int ans = INT_MIN;

    ans = findMax(arr, size, 0, ans);
    cout<<"max element: "<<ans;
    return 0;
}