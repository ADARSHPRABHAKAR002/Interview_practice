#include <iostream>
#include <thread>
#include <mutex>

std::mutex mtx; // Mutex to protect shared resource
int sharedResource = 0; // Shared resource

void threadFunction() {
    for (int i = 0; i < 100000; i++) {
        mtx.lock(); // Acquire mutex
        sharedResource++; // Access shared resource
        mtx.unlock(); // Release mutex
    }
}

int main() {
    std::thread t1(threadFunction);
    std::thread t2(threadFunction);
    t1.join();
    t2.join();
    std::cout << "Shared resource: " << sharedResource << std::endl;
    return 0;
}
