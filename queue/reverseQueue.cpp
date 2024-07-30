#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void reverseQueue(queue<int> &q)
{
    stack<int> st;
    while (!q.empty())
    {
        int el = q.front();
        st.push(el);
        q.pop();
    }

    while (!st.empty())
    {
        int top = st.top();
        q.push(top);
        st.pop();
    }
}

void reverseWithBacktracking(queue<int> &q)
{
    if (q.empty())
        return;

    int temp = q.front();
    q.pop();

    reverseWithBacktracking(q);

    q.push(temp);
}

int main()
{
    queue<int> q({10, 20, 30, 40, 50});

    reverseWithBacktracking(q);

    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }

    return 0;
}