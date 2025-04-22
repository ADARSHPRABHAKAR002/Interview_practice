#ifndef LINK_HPP
#define LINK_HPP

#define SUCCESS 1
#define FAILURE 0

#include <iostream>

struct Node
{
    int data;
    Node* next;
    Node(int value);
};

class LinkedList
{
private:
    Node* head;

public:
    LinkedList();
    ~LinkedList();

    //void members
    bool addAtBeginning(int value);
    bool addAtEnd(int value);
    bool deleteNode(int value);
    void display() const;
};

#endif
