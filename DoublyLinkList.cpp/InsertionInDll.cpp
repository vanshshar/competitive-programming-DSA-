//head , tail . kth  , node(before)
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

Node* beforeHead(Node* head , int val) {
    Node* newHead = new Node(val , head, nullptr);
    head->prev = newHead;
    return newHead;
}

Node* beforeTail(Node* head , int val) {
    Node* tail = head;
    while(tail->next != NULL) {
        tail = tail->next;
    }
    Node* back = tail->prev;
    Node* tailNode = new Node(10 , tail , back);
    back->next = tailNode;
    tail->prev = tailNode;
    return head;
}

Node* insertkth(Node* head ,int k, int val) {
    Node* temp = head;
    int cnt = 0;
    while(temp != NULL) {
        cnt++;
        if(cnt == k) break;
        temp = temp->next;
    }
    Node* back = temp->prev;
    Node* newNode = new Node(val , temp , back);
    back->next = newNode;
    temp->prev = newNode;
    return head;
}

void insertBeforeNode(Node* node , int val) { //in this we do not want to change head so it is just an insertion method.
    Node* back = node->prev;
    Node* newNode = new Node(val , node , back);
    back->next = newNode;
    node->prev = newNode;
}


int main() {
    vector<int> arr = {2,5,6,3,8};
    Node* head = convert2Dll(arr);
    // head = beforeHead(head , 58);
    // head = beforeTail(head , 10);
    // head = insertkth(head , 4 , 20);
    insertBeforeNode(head->next->next , 100);
    print(head);
}