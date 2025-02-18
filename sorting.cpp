#include <iostream>
#include <vector>
using namespace std;

void bubbleSort(vector<int> &v)
{
    int n = v.size();

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (v[j] > v[j + 1]) // ascending order
            {
                swap(v[j], v[j + 1]);
            }
        }
    }
}

void selectionSort(vector<int> &v)
{
    int n = v.size();

    for (int i = 0; i < n - 1; i++)
    {
        int minIndex = i;

        for (int j = i + 1; j < n; j++)
        {
            if (v[minIndex] > v[j])
                minIndex = j;
        }

        swap(v[i], v[minIndex]);
    }
}

void insertionSort(vector<int> &v)
{

    int n = v.size();

    for (int i = 1; i < n; i++)
    {
        int key = v[i], j = i - 1;

        while (j >= 0 && v[j] > key)
        {
            v[j + 1] = v[j];
            j--;
        }

        v[j + 1] = key;
    }
}

void printVector(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}

int main()
{

    vector<int> v = {44, 33, 55, 22, 11};
    // bubbleSort(v);
    // selectionSort(v);
    // insertionSort(v);
    printVector(v);

    return 0;
}