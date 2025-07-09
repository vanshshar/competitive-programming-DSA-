#include<iostream>
#include<vector>
using namespace std;

class Node {
    public:
    int data;
    Node* next;
    Node* prev;

    public:
    Node(int data1 , Node* next1 , Node* prev1) {
        data = data1;
        next = next1;
        prev = prev1;
    }

    public:
    Node(int data1) {
        data = data1;
        next = nullptr;
        prev = nullptr;
    }
};

Node* convert2Dll(vector<int> &arr) {
    Node* head = new Node(arr[0]);
    Node* prev = head;
    for(int i=1; i<arr.size(); i++) {
        Node* temp = new Node(arr[i] , nullptr , prev);
        prev->next = temp;
        prev = temp; //prev->next
    } return head;
}

int print(Node* head) {
    while(head != NULL) {
        cout<<head->data<<" ";
        head = head->next;
    }
}

Node* deleteHead(Node* head) {
    if(head == NULL || head->next == NULL) {
        return NULL;
    }
    Node* prev = head;
    head = head->next;
    head->prev = nullptr;
    prev->next = nullptr;
    return head;
}

Node* deletetail(Node* head) {
    if(head == NULL || head->next == NULL) {
        return NULL;
    }
    Node* tail = head;
    while(tail->next != NULL) {
       tail = tail->next;
    }
    Node* newTail = tail->prev;
    newTail->next = nullptr;
    tail->prev = nullptr;
    delete(tail);
    return head;
}

int main() {
    vector<int> arr = {2,5,6,3,8};
    Node* head = convert2Dll(arr);
    // head = deleteHead(head);
    head = deletetail(head);
    print(head);
}