#include <iostream>
#include <vector>
using namespace std;

int main() {
    // 1. Creating a vector of integers
    vector<int> vec;

    // 2. Adding elements using push_back
    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);

    // 3. Displaying vector using for loop
    cout << "Elements in vector: ";
    for (int i = 0; i < vec.size(); i++) {
        cout << vec[i] << " ";
    }
    cout << endl;

    // 4. Accessing elements using at()
    cout << "Element at index 1: " << vec.at(1) << endl;

    // 5. Accessing front and back
    cout << "First element: " << vec.front() << endl;
    cout << "Last element: " << vec.back() << endl;

    // 6. Checking size and capacity
    cout << "Size: " << vec.size() << ", Capacity: " << vec.capacity() << endl;

    // 7. Inserting an element at specific position
    vec.insert(vec.begin() + 1, 15);  // Inserts 15 at index 1

    // 8. Erasing an element
    vec.erase(vec.begin() + 2);  // Removes the element at index 2

    // 9. Displaying updated vector
    cout << "After insertion and erasure: ";
    for (int val : vec) {
        cout << val << " ";
    }
    cout << endl;

    // 10. Checking if vector is empty
    cout << "Is vector empty? " << (vec.empty() ? "Yes" : "No") << endl;

    // 11. Resize the vector
    vec.resize(5); // Increase to size 5 (adds 0s)
    cout << "After resizing to 5: ";
    for (int val : vec) {
        cout << val << " ";
    }
    cout << endl;

    // 12. Pop last element
    vec.pop_back();
    cout << "After pop_back: ";
    for (int val : vec) {
        cout << val << " ";
    }
    cout << endl;

    // 13. Clear the vector
    vec.clear();
    cout << "After clearing, size: " << vec.size() << endl;

    return 0;
}