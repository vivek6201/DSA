#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void reverseKQueue(queue<int> &q, int k) {
    int n = q.size();
    int reqK = k;
    stack<int> st;

    //push k ele in stack
    while(reqK--){
        st.push(q.front());
        q.pop();
    }

    //push the ele of stack untill stack is empty
    while(!st.empty()){
        q.push(st.top());
        st.pop();
    }

    //pick left ele one by one and push in queue.
    int left = n-k;
    while(left--){
        int front = q.front();
        q.pop();
        q.push(front);
    }
}

int main(){
    queue<int> q({10,20,30,40,50});

    reverseKQueue(q, 3);

    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }

    return 0;
}

