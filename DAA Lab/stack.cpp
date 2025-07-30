#include <iostream>
#include <vector>
using namespace std;

template <typename T>
class Stack {
    vector<T> arr;  // dynamic array to store stack elements

public:
    // Push element
    void push(T value) {
        arr.push_back(value); // add at the end
    }

    // Pop element
    void pop() {
        if (arr.empty()) {
            cout << "Stack is empty!" << endl;
            return;
        }
        arr.pop_back(); // remove last element
    }

    // Get top element
    T peek() {
        if (arr.empty()) {
            cout << "Stack is empty!" << endl;
            return T(); // default value
        }
        return arr.back(); // return last element
    }

    // Check if stack is empty
    bool isEmpty() {
        return arr.empty();
    }

    // Get current size
    int size() {
        return arr.size();
    }
};
int main() {
    Stack<int> s;
    s.push(100);
    s.push(200);
    cout << "Top: " << s.peek() << endl; // Output: 200
    s.pop();
    cout << "Top after pop: " << s.peek() << endl; // Output: 100

    Stack<string> s2;
    s2.push("hello");
    s2.push("world");
    cout << "Top string: " << s2.peek() << endl; // Output: world

    return 0;
}
