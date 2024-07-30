#include <iostream>
using namespace std;

int searchInArr(int *arr, int size, int target, int index)
{

    if (arr[index] == target)
        return index;

    if (index == size)
        return -1 ;

    return searchInArr(arr, size, target, index + 1);
}

int main()
{
    int arr[] = {10, 20, 30, 40, 51};
    int size = 5;
    int target = 50;

    cout<<"the index is: "<<searchInArr(arr, size, target, 0);
    return 0;
}