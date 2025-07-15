#include <iostream>
#include <bits/stdc++.h>

using namespace std;

// Node class represents a
// node in a linked list
class Node {
public:
    // Data stored in the node
    int data;   
    
    // Pointer to the next node in the list
    Node* next;      

    // Constructor with both data and
    // next node as parameters
    Node(int data1, Node* next1) {
        data = data1;
        next = next1;
    }

    // Constructor with only data as a
    // parameter, sets next to nullptr
    Node(int data1) {
        data = data1;
        next = nullptr;
    }
};

Node* sortArray(Node* head) {  //TC = O(2N)
    Node* temp = head;
    int cnt0 = 0 , cnt1 = 0 , cnt2 = 0;
    while(temp != NULL) {
        if(temp->data == 0) cnt0++;
        else if(temp->data == 1) cnt1++;
        else cnt2++;
        temp = temp->next;
    }
    temp = head;
    while(temp != NULL) {
        if(cnt0) {
            temp->data = 0;
            cnt0--;
        }
        else if(cnt1) {
            temp->data = 1;
            cnt1--;
        }
        else {
            temp->data = 2;
            cnt2--;
        }
        temp = temp->next;
    } return head;
}

// <-----------------------OPTIMAL SOLUTION--------------------------->

Node* segregate(Node* head) {
        if(head == NULL || head->next == NULL) {
            return head;
        }
        
        Node* zeroHead = new Node(-1);
        Node* oneHead = new Node(-1);
        Node* twoHead = new Node(-1);
        
        Node* zero = zeroHead;
        Node* one = oneHead;
        Node* two = twoHead;
        Node* temp = head;
        
        while(temp != NULL) {
            if(temp->data == 0) {
                zero->next = temp;
                zero = zero->next;
            } else if(temp->data == 1) {
                one->next = temp;
                one = one->next;
            } else {
                two->next = temp;
                two = two->next;
            }
            temp = temp->next;
        }
        
        zero->next = (oneHead->next) ? (oneHead->next) : (twoHead->next);
        one->next = twoHead->next;
        two->next = nullptr;
        Node* newHead = zeroHead->next;
        delete zeroHead;
        delete oneHead;
        delete twoHead;
        return newHead;
    }


// Function to print the linked list
void printLinkedList(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    // Create a linked list with
    // values 1, 3, 2, and 4
    Node* head = new Node(0);
    head->next = new Node(1);
    head->next->next = new Node(0);
    head->next->next->next = new Node(2);

    // Print the original linked list
    cout << "Original Linked List: ";
    printLinkedList(head);

    // Reverse the linked list
    // head = reverseLinkedList(head);
    // head = sortArray(head);
    head = segregate(head);

    // Print the reversed linked list
    cout << "Sorted Linked List: ";
    printLinkedList(head);

    return 0;
}