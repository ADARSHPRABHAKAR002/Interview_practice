// STL (Standard Template Library) in C++

// The Standard Template Library (STL) in C++ is a powerful library that provides a collection of well-tested and reusable
// classes and functions for data structures, algorithms, and iterators. It is part of the C++ Standard Library and offers
// an efficient, generic way to handle common programming problems.

// Components of the STL

// The STL is broadly divided into the following components:


// Containers:

// Data structures that store collections of objects.
// Examples: vector, list, map, set, deque, etc.

// Iterators:
// Objects that allow traversal through the elements of containers.
// Examples: begin(), end(), rbegin(), rend().

// Algorithms:
// Predefined functions for operations like sorting, searching, manipulation, etc.
// Examples: sort, reverse, find, count, binary_search.

// Functors:
// Objects that can be treated as functions (function objects).
// Used with algorithms for custom operations.


//------------------------------------------------------------------------------------------------------

// 1. Containers

// A container is an object that stores data. STL containers are broadly classified into three types:


// a. Sequence Containers
// Store elements in a linear sequence.
// Examples:
//     vector: Dynamic array (resizable).
//     deque: Double-ended queue.
//     list: Doubly linked list.
//     array: Fixed-size array (introduced in C++11).
//     forward_list: Singly linked list (introduced in C++11).

// b. Associative Containers
// Store elements in a sorted order and allow fast retrieval using keys.
// Examples:
//     set: Stores unique elements in sorted order.
//     multiset: Stores duplicate elements in sorted order.
//     map: Stores key-value pairs with unique keys in sorted order.
//     multimap: Stores key-value pairs with duplicate keys in sorted order.

// c. Unordered Associative Containers
// Store elements in unsorted order using hash tables.
// Examples:
//     unordered_set: Stores unique elements (unsorted).
//     unordered_multiset: Stores duplicate elements (unsorted).
//     unordered_map: Stores key-value pairs with unique keys (unsorted).
//     unordered_multimap: Stores key-value pairs with duplicate keys (unsorted).

// d. Container Adapters
// Special containers with restricted functionality.
// Examples:
//     stack: LIFO structure.
//     queue: FIFO structure.
//     priority_queue: Elements are arranged based on priority.

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> numbers = {1, 2, 3};

    numbers.push_back(4);  // Add element at the end
    numbers.pop_back();    // Remove last element

    for (int num : numbers)
        cout << num << " ";

    return 0;
}


//----------------------------------------------------------------------------------------------------------------------

// 3. Algorithms

// STL provides a variety of algorithms for common operations. Algorithms work with iterators and containers.

// Sorting
// sort(arr.begin(), arr.end());  // Sort in ascending order
// sort(arr.rbegin(), arr.rend());  // Sort in descending order

// Searching
// binary_search(arr.begin(), arr.end(), value);

// Reversing
// reverse(arr.begin(), arr.end());

// Finding
// find(arr.begin(), arr.end(), value);

// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// int main() {
//     vector<int> numbers = {5, 2, 8, 1, 3};

//     sort(numbers.begin(), numbers.end());  // Sort in ascending order
//     for (int num : numbers)
//         cout << num << " ";

//     if (binary_search(numbers.begin(), numbers.end(), 3))
//         cout << "\nFound 3!" << endl;

//     return 0;
// }

