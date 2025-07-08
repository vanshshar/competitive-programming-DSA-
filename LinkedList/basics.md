# 🧠 Linked List Revision Notes (Striver Style)

---

## 🔹 1. What is a Linked List?

A **linked list** is a data structure consisting of nodes, where each node contains:
- `data`: the value stored
- `next`: a pointer to the next node

It looks like:
```
[data | next] → [data | next] → NULL
```

---

## 🔹 2. Node Class in C++

```cpp
class Node {
public:
    int data;
    Node* next;

    // Constructor with next pointer
    Node(int data1, Node* next1) {
        data = data1;
        next = next1;
    }

    // Constructor without next pointer
    Node(int data1) {
        data = data1;
        next = nullptr;
    }
};
```

---

## 🔹 3. Creating Nodes

### ✅ On Stack
```cpp
Node n(2);           // Stored in stack
Node* y = &n;        // y points to node n
```

### ✅ On Heap
```cpp
Node* y = new Node(2);  // Dynamically created node on heap
```

---

## 🔹 4. Connecting Nodes

```cpp
Node* head = new Node(10);
head->next = new Node(20);
head->next->next = new Node(30);
```

Linked List formed:
```
[10] → [20] → [30] → NULL
```

---

## 🔹 5. Printing a Linked List

```cpp
void printList(Node* head) {
    while (head != nullptr) {
        cout << head->data << " ";
        head = head->next;
    }
}
```

---

## 🔹 6. Constructor Overloading

You learned two constructors:
- `Node(int data1)` → creates node with data and sets `next` as `nullptr`
- `Node(int data1, Node* next1)` → creates node and connects it to another node

---

## 🔹 7. Memory and Pointer Understanding

| Concept | Explanation |
|--------|-------------|
| `Node* y = &n;` | y points to node n (on stack) |
| `Node* z = new Node(5);` | creates node on heap |
| `ptr->data` | accesses data of the node |
| `ptr->next` | accesses next pointer of the node |

Term	Meaning
Node	A full object (the actual node)
Node*	A pointer — it stores the address of a Node

> ✅ **Function Return Rules in Linked List**

| Situation                              | Return Type        | Function Signature Example           |
|----------------------------------------|---------------------|---------------------------------------|
| You need to **modify** or **create** a new linked list | `Node*`            | `Node* reverseList(Node* head)`     |
| You only want to **calculate** or **check** something | `int`, `bool`, etc | `int getLength(Node* head)`         |
| You want to **print** or **traverse** only | `void`              | `void printList(Node* head)`        |


---


