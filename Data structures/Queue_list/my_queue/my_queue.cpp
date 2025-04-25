#include "my_queue.h"

// Add an element to the end of the queue
void my_queue::enqueue(int value) {
    data.push_back(value);
}

// Remove and return the front element of the queue
int my_queue::dequeue() {
    if (isEmpty()) {
        throw runtime_error("Queue is empty! Cannot dequeue.");
    }
    int frontValue = data.front();  // Access the front element
    data.erase(data.begin());       // Remove the front element
    return frontValue;
}

// Return the front element without removing it
int my_queue::front() const {
    if (isEmpty()) {
        throw runtime_error("Queue is empty! Cannot access front.");
    }
    return data.front();  // Return the front element
}

// Return the number of elements in the queue
int my_queue::size() const {
    return data.size();
}

// Check if the queue is empty
bool my_queue::isEmpty() const {
    return data.empty();
}
