#include<iostream>
#include<vector>
using namespace std;

template<typename T>
class Stack{
    vector<T> arr;
    public :
        void push(T value) {
            arr.push_back(value);
        }

        void pop() {
            if(arr.empty()) {
                cout<<"Stack is empty"<<endl;
                return;
            }
            arr.pop_back();
        }

        T peek() {
            if(arr.empty()) {
                cout<<"Stack is empty"<<endl;
                return T();
            }
            return arr.back();
        }

        bool isEmpty() {
            return arr.empty();
        }
        
        int size() {
            return arr.size();
        }
};
int main() {
    Stack<int> s;
    s.push(100);
    s.push(200);
    s.push(300);
    while(!s.isEmpty()) {
        cout<<s.peek()<<endl;
        s.pop();
    }
    return 0;
}