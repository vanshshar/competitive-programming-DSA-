#include<iostream>
#include<vector>
using namespace std;

class Node { //here we have used class instead od struct because we want oops in this code
    // In C++, class members are private by default, while struct members are public by default
    public:
    int data;
    Node* next;

    //this is called overloading of constructor
    //we can have multiple constructors with different parameters

    public:
    Node(int data1 , Node* next1) {
        data = data1;
        next = next1;
    } //this is used when we have next node to link to

    public:
    Node(int data1) {
        data = data1;
        next = nullptr;
    } //this is used when we are creating a single node without linking it to any other node
    
};
Node* convertArr2ll(vector<int> &arr) { //cobverting array to the link list
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for(int i=1; i<arr.size(); i++) {
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp; 
    }
    return head;
}
int checkIfPresent(Node* head , int val) {
    Node* temp = head;
    while(temp) {
        if(temp->data == val) return temp->data;
        temp = temp->next;
    } return 0;
    //this is a simple linear search in the linked list
}
int lengthofll(Node* head) {
    Node* temp = head;
    int cnt = 0;
    while(temp) {
        temp = temp->next;
        cnt++;
    }return cnt;
}
int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    Node* head = convertArr2ll(arr);
    // cout<<checkIfPresent(head , 5);
    cout<<lengthofll(head);
} //never ever temper your head means if you move your head then you will forget the first node
//so always keep your head intact and move a pointer to traverse the linked list