#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node()
    {
        this->next = NULL;
    }

    Node(int data)
    {
        this->data = data;
        this->next = NULL; 
    }
};

int count(Node *head) {
    int count = 0;
    Node *temp = head;

    while(temp != NULL){
        ++count;
        temp = temp->next;
    }

    return count;
}

int main()
{

    Node *first = new Node();
    Node *second = new Node();
    Node *third = new Node();
    Node *forth = new Node();
    Node *fifth = new Node();

    first->next = second;
    second->next = third;
    third->next = forth;
    forth->next = fifth;

    cout<<"total number of nodes are: "<<count(first)<<endl;
    return 0;
}