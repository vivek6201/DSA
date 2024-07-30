#include <iostream>
#include <bits/stdc++.h>
using namespace std;

template <typename T>
class DeQue
{
    T *arr;
    int front, rear, size;

public:
    DeQue(int size) : arr(new T[size]), front(-1), rear(-1), size(size) {}

    void push_front(T val) {}

    void push_back(T val) {}

    T pop_front() {}

    T pop_back() {}

    int getSize() {}

    bool isEmpty() {}

    bool isFull() {}
};

int main()
{
}