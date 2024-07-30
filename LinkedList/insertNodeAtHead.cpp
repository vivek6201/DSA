#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node() : next(NULL) {}
    Node(int data) : data(data), next(NULL){};
};

void insertAtHead(Node *&head, int data)
{
    Node *newNode = new Node(data);
    newNode->next = head;
    head = newNode;
}

void printLL(Node *head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << endl;
}

int main()
{
    Node *first = new Node(10);
    Node *second = new Node(20);

    first->next = second;

    insertAtHead(first, 30);
    printLL(first);
    return 0;
}
