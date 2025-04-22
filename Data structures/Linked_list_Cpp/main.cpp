#include <iostream>
#include "link.hpp"
// #include <assert>
using namespace std;
int main()
{
    LinkedList list;

    list.addAtBeginning(10);
    list.addAtBeginning(20);
    list.addAtEnd(30);
    list.addAtEnd(40);

    std::cout << "Linked List after adding nodes:" << std::endl;
    list.display();

    // Deleting a node
    list.deleteNode(20);
    std::cout << "Linked List after deleting a node:" << std::endl;
    list.display();

    // Attempting to delete a non-existing node
    list.deleteNode(50);

    return 0;
}