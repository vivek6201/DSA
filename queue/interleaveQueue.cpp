#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//question exists only for first half

void interleaveQueue(queue<int> &q){
    queue<int> q2;

    int mid = q.size() / 2;

    while(mid--){
        q2.push(q.front());
        q.pop();
    }

    while(!q2.empty()){
        int temp = q2.front();
        q.push(temp);
        q.push(q.front());
        q.pop();
        q2.pop();
    }
}

int main(){
    queue<int> q({10,20,30,40,50,60,70});
    interleaveQueue(q);

    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }

    return 0;
}