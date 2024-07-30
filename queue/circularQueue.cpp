#include <iostream>
#include <bits/stdc++.h>

using namespace std;

template <typename T>
class CQueue
{
    T *arr;
    int size, front, rear;

public:
    CQueue(int size) : arr(new T[size]), front(-1), rear(-1), size(size) {}

    void push(T val)
    {
        if (front == -1 && rear == -1)
        {
            front++;
            rear++;
            arr[rear] = val;
            return;
        }

        if ((rear == size - 1 && front == 0) || (rear == front - 1))
        {
            cout << "Queue is full i.e. Queue Overflow" << endl;
            return;
        }

        if (rear == size - 1 && front != 0)
        {
            rear = 0;
            arr[rear] = val;
            return;
        }

        rear++;
        arr[rear] = val;
        return;
    }

    T pop()
    {
        if (front == -1 && rear == -1)
        {
            cout << "Queue is empty i.e. Queue underflow" << endl;
            return -1;
        }

        if (front == rear)
        {
            T value = arr[rear];
            arr[rear] = -1;
            front = -1;
            rear = -1;

            return value;
        }

        if (front == size - 1)
        {
            T value = arr[front];
            arr[front] = -1;
            front = 0;
            return value;
        }

        T value = arr[front];
        arr[front] = -1;
        front++;
        return value;
    }

    T getFront()
    {
        if (front != -1)
        {
            return arr[front];
        }

        return -1;
    }

    bool isEmpty()
    {
        return (front == -1 && rear == -1);
    }

    bool isFull()
    {
        return ((front == 0 && rear == size - 1) || (rear == front - 1));
    }

    void printCQ(){
        for(int i = 0; i< size;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        return;
    }

    ~CQueue() {
        delete[] arr;
    }
};

int main(){
    CQueue<int> *cq = new CQueue<int>(5);

    cq->push(10);
    cq->push(20);
    cq->push(30);
    cq->push(40);
    cq->push(50);

    cout<<cq->pop()<<endl;
    cout<<cq->pop()<<endl;
    cout<<cq->pop()<<endl;
    cout<<cq->pop()<<endl;

    cq->push(20);
    cq->push(20);
    cq->push(20);
    // cq->push(20);
    // cq->push(20);

    cout<<cq->isFull()<<endl;
    cout<<cq->isEmpty()<<endl;
    cout<<cq->getFront()<<endl;
    cq->push(10);

    cq->printCQ();

    return 0;
}

