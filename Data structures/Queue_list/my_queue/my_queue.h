#ifndef MY_QUEUE_H
#define MY_QUEUE_H

#include <vector>
#include <stdexcept>  // For exceptions like runtime_error
using namespace std;

// Define the Queue Interface
class QueueInterface {
public:
    virtual void enqueue(int value) = 0;  // Add an element to the queue
    virtual int dequeue() = 0;           // Remove and return the front element
    virtual int front() const = 0;       // Return the front element without removing
    virtual int size() const = 0;        // Get the size of the queue
    virtual bool isEmpty() const = 0;    // Check if the queue is empty
    virtual ~QueueInterface() {}         // Virtual destructor
};

// Define the my_queue class that implements the QueueInterface
class my_queue : public QueueInterface {
private:
    vector<int> data;  // Internal container for storing queue elements
public:
    // Override all the functions declared in the interface
    void enqueue(int value) override;
    int dequeue() override;
    int front() const override;
    int size() const override;
    bool isEmpty() const override;
};

#endif  // MY_QUEUE_H
