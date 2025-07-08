#include<iostream>
#include<vector>
using namespace std;

class Node {
    public:
    int data;
    Node* next;

    public:
    Node(int data1 , Node* next1) {
        data = data1;
        next = next1;
    }

    public:
    Node(int data1) {
        data = data1;
        next = nullptr;
    }
};

Node* convertArr2ll(vector<int> &arr) {
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for(int i=1; i<arr.size(); i++) {
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    } return head;
}

void print(Node* head) {
    while(head != NULL) {
        cout<<head->data<<" ";
        head = head->next;
    } cout<<endl;
}

Node* inserthead(Node* head , int val) {
    Node* temp = new Node(val , head);
    return temp; //returning the new head
}

Node* inserttail(Node* head , int val) {
    if(head == NULL) {
        return new Node(val);
    }
    Node* temp = head;
    while(temp->next != NULL) {
        temp = temp->next;
    }
    Node* newNode = new Node(val);
    temp->next = new Node(val);
    return head;
}

Node* insertk(Node* head , int k , int val) {
    if(head == NULL) {
        if(k == 1) return new Node(val);
        else return NULL;
    }
    if(k == 1) {
        Node* temp = new Node(val , head);
        temp->next = head;
        return temp;
    }
    Node* temp = head;
    int cnt = 0;
    while(temp != NULL) {
        cnt++;
        if(cnt == k-1) {
            Node* newNode = new Node(val , temp->next);
            temp->next = newNode;
            break;
        }
        temp = temp->next;
    } return head;
}

Node* insertBeforeValue(Node* head , int el , int val) {
    if(head == NULL) {
         return NULL;
    }
    if(head->data == val) {
        Node* temp = new Node(val , head);
        temp->next = head;
        return temp;
    }
    Node* temp = head;
    while(temp->next != NULL) {
        if(temp->next->data == el) {
            Node* newNode = new Node(val , temp->next);
            temp->next = newNode;
            break;
        }
        temp = temp->next;
    } return head;
}

int main() {
    vector<int> arr = {1,2,10,4,5};
    Node* head = convertArr2ll(arr);
    // head = inserthead(head, 100); //inserting 100 at the head
    head = inserttail(head ,100); //inserting 100 at the tail
     // head = insertk(head ,3 , 100);
    // head = insertBeforeValue(head , 4 , 89);
    print(head);
}