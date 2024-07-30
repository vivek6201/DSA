#include <iostream>
using namespace std;

int BS(int *arr, int start, int end, int target)
{
    if (start > end)
        return -1;

    int mid = start + (end - start) / 2;

    if (arr[mid] == target)
        return mid;

    if (arr[mid] > target)
    {
        return BS(arr, start, mid - 1, target);
    }
    else
    {
        return BS(arr, mid + 1, end, target);
    }
}

int main()
{
    int arr[] = {10, 20, 20, 40, 50};
    int target = 30;

    int ans = BS(arr, 0, 5, target);

    if (ans != -1)
        cout << "element found at index: " << ans;
    else
        cout << "element not found";
    return 0;
}