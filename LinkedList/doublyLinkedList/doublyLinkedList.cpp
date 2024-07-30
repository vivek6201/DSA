#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *prev, *next;

    Node() : prev(NULL), next(NULL) {}

    Node(int data) : data(data), prev(NULL), next(NULL) {}
};

class LinkedList
{
    Node *head, *tail;

public:
    LinkedList() : head(NULL), tail(NULL) {}

    void getHeadTail()
    {
        cout << "head: " << head->data << "tail: " << tail->data;
    }

    void insertNode(int data, int pos);

    void deleteNode(int pos);

    int getLength();

    void printList();
};

void LinkedList::printList()
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << endl;

    return;
}

int LinkedList::getLength()
{
    int count = 0;

    Node *temp = head;

    while (temp != NULL)
    {
        ++count;
        temp = temp->next;
    }

    return count;
}

void LinkedList::insertNode(int data, int pos)
{
    int len = LinkedList::getLength();

    // empty list
    if (head == NULL && tail == NULL)
    {
        cout << "Null list" << endl;
        Node *temp = new Node(data);
        head = temp;
        tail = temp;
        return;
    }

    // single node list
    if (head == tail)
    {
        cout << "head tail" << endl;
        Node *newNode = new Node(data);
        if (pos == 1) // insert at head
        {
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
        else // insert at tail
        {
            head->next = newNode;
            newNode->prev = head;
            tail = newNode;
        }

        return;
    }
    else if (pos >= len + 1) // insert at tail
    {
        cout << "at tail" << endl;
        Node *newNode = new Node(data);
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
        return;
    }
    else if (pos <= 1) // insert at head
    {
        cout << "at head" << endl;
        Node *newNode = new Node(data);
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
        return;
    }
    else // insert in between
    {
        cout << "in between" << endl;
        Node *newNode = new Node(data);
        Node *curr = head;
        Node *prev = NULL;

        while (pos != 1)
        {
            prev = curr;
            curr = curr->next;
            pos--;
        }

        prev->next = newNode;
        newNode->prev = prev;
        newNode->next = curr;
        curr->prev = newNode;

        return;
    }
}

void LinkedList::deleteNode(int pos)
{
    int len = LinkedList::getLength();

    if (head == NULL && tail == NULL)
    {
        cout<<"List is empty"<<endl;
        return;
    } 

    if (head == tail)
    {
        Node *temp = head;
        head = NULL;
        tail = NULL;
        delete temp;
        return;
    }

    if (pos == 1)
    {
        Node *temp = head;
        head = temp->next;
        temp->next = NULL;
        head->prev = NULL;

        delete temp;
        return;
    }
    else if (pos == len)
    {
        Node *temp = tail;
        tail = temp->prev;
        tail->next = NULL;
        temp->prev = NULL;
        delete temp;
        return;
    }
    else
    {
        Node *temp = head;

        while (pos != 1)
        {
            temp = temp->next;
            pos--;
        }

        Node *prevNode = temp->prev;
        Node *nextNode = temp->next;

        prevNode->next = nextNode;
        nextNode->prev = prevNode;
        temp->next = NULL;
        temp->prev = NULL;
        delete temp;
        return;
    }
}

int main()
{
    LinkedList list;

    list.insertNode(10, 1);
    list.insertNode(20, 2);
    list.insertNode(30, 3);
    // list.insertNode(5, 1);

    // list.insertNode(25, 4);
    // list.printList();

    list.deleteNode(2);

    list.printList();

    return 0;
}