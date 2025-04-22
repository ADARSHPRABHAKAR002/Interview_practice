#include <iostream>
#include "link.hpp"
using namespace std;
Node::Node(int value) : data(value), next(nullptr) {}

LinkedList::LinkedList() : head(nullptr) {}


LinkedList::~LinkedList(){
    Node* current = head;
    while( current!= head){
        Node* nextNode = current->next;
        delete current;
        current = nextNode;
    }
}

bool LinkedList::addAtBeginning(int value){
    Node* newNode = new Node(value);
    newNode->next = head;
    head = newNode;
    return SUCCESS;
}

bool LinkedList::addAtEnd(int value){
    Node* newNode = new Node(value);
    if (head == nullptr) {
        head = newNode;
        return SUCCESS;
    }
    Node* temp = head;
    while (temp->next != nullptr) {
        temp = temp->next;
    }
    temp->next = newNode;\
    return SUCCESS;
}

bool LinkedList::deleteNode(int value){
    if(head == nullptr)
    {
        std::cout << "lsit is empty" << std::endl;
        return SUCCESS;
    }
    if(head->data == value){
        Node* temp = head;
        head = head->next;
        delete temp;
        std::cout << "Element in first place deleted and head updated" << std::endl;
        return SUCCESS;
    }

    Node* current = head;
    Node* prev = nullptr;
    bool status = false;
    while(current->next!=nullptr){
        if(current->data == value){
            prev->next = current->next;
            delete current;
            std::cout << "Element found " << value << " and deleted. List Updated" << std::endl;
            status = true;
            return SUCCESS;
        }
        prev = current;
        current = current->next;
    }
    if(status == false){
        std::cout << "Element node found in the list" << std::endl;
        return FAILURE;
    }
    return FAILURE;

}

void LinkedList::display() const{
    if(head == nullptr){
        std::cout << "empyty list" << std::endl;
    }
    Node* temp = head;
    while(temp!=nullptr)
    {
        std::cout << temp->data << " ->";
        temp = temp->next;
    }
    std::cout << "NULL" << std::endl;
}

