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

Node* removeHead(Node* head) {
    if(head == NULL) return head;
    Node* temp = head;
    head = head->next;
    delete(temp);
    return head;
}

Node* removeTail(Node* head) {
    if(head == NULL || head->next == NULL) return NULL;
    Node* temp = head;
    while(temp->next->next != NULL) {
        temp = temp->next;
    }
    delete(temp->next);
    temp->next = NULL;
    return head;
}

Node* removeK(Node* head , int k) {
    if(head == NULL) return head;
    if(k == 1) {
        Node* temp = head;
        head = head->next;
        free(temp);
        return head;
    }
    int cnt = 0;
    Node* prev = NULL;
    Node* temp = head;
    while(temp != NULL) {
        cnt++;
        if(cnt == k) {
            prev->next = prev->next->next;
            free(temp);
            break;
        }
        prev = temp;
        temp =  temp->next;
    } return head;
}

Node* removevalue(Node* head , int el) {
    if(head == NULL) return head;
    if(head->data == el) {
        Node* temp = head;
        head = head->next;
        free(temp);
        return head;
    }
    Node* prev = NULL;
    Node* temp = head;
    while(temp != NULL) {
        if(temp->data == el) {
            prev->next = prev->next->next;
            free(temp);
            break;
        }
        prev = temp;
        temp =  temp->next;
    } return head;
}


int main() {
    vector<int> arr = {1,2,10,4,5};
    Node* head = convertArr2ll(arr);
    // head = removeHead(head);
    // head = removeTail(head);
    // head = removeK(head , 4);
    // head = removevalue(head , 10);
    print(head);
}