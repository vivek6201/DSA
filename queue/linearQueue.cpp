#include <iostream>
#include <bits/stdc++.h>

using namespace std;

template <typename T>

class Queue
{
    T *arr;
    int size;
    int front;
    int rear;

public:
    // using initialization list
    Queue(int size) : arr(new T[size]), size(size), front(-1), rear(-1) {}

    void push(T val)
    {
        if (front == -1 && rear == -1)
        {
            front++;
            rear++;
            arr[front] = val;
        }
        else if (rear == size - 1)
        {
            cout << "Queue Overflow" << endl;
            return;
        }
        else
        {
            rear++;
            arr[rear] = val;
        }
    }

    T pop()
    {
        if (front == -1 && rear == -1)
        {
            cout << "Queue Underflow" << endl;
            return -1;
        }
        if (front == rear)
        {
            T value = arr[front];
            front = -1;
            rear = -1;
            return value;
        }

        T value = arr[front];
        front++;
        return value;
    }

    int getSize()
    {
        if (front == -1 && rear == -1)
            return 0;
        return rear - front + 1;
    }
    bool isEmpty()
    {
        return (front == -1 && rear == -1);
    }
};

int main()
{
    Queue<int> q(5);

    return 0;
}