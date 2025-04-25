#include <iostream>
#include "my_queue.h"

int main() {
    my_queue q;

    // Enqueue elements
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    // Display the size of the queue
    std::cout << "Queue size: " << q.size() << std::endl;  // Output: 3

    // Get the front element
    std::cout << "Front element: " << q.front() << std::endl;  // Output: 10

    // Dequeue elements
    std::cout << "Dequeued: " << q.dequeue() << std::endl;  // Output: 10
    std::cout << "Dequeued: " << q.dequeue() << std::endl;  // Output: 20

    // Check if the queue is empty
    std::cout << "Is queue empty? " << (q.isEmpty() ? "Yes" : "No") << std::endl;  // Output: No

    // Dequeue the last element
    std::cout << "Dequeued: " << q.dequeue() << std::endl;  // Output: 30

    // Check if the queue is empty
    std::cout << "Is queue empty? " << (q.isEmpty() ? "Yes" : "No") << std::endl;  // Output: Yes

    return 0;
}
