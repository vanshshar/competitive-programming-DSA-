# 📘 Time Complexities in DSA – What’s Optimal?

## 🚀 Short Answer
No, **O(n log n)** is **not** the best for all DSA problems. It depends on **what you're solving**.

---

## 🔍 Explanation

### ✅ When **O(n log n)** is considered optimal
- Sorting **generic data** (e.g., merge sort, quicksort).
- You can’t sort arbitrary elements (like strings, numbers) in better than **O(n log n)** using comparisons.
- **Proof:** Comparison-based sorting has a lower bound of **Ω(n log n)**.

### ✅ When **O(n)** is optimal
- Input has **limited values** (like 0, 1, 2).
  - Use counting sort, radix sort, bucket sort, or pointer logic.
  - For your **0s, 1s, 2s linked list**, use counting or 3-pointer logic for **O(n)**.
- Linear scan problems:
  - Find max/min in array → O(n)
  - Check palindrome → O(n)
  - Reverse a linked list → O(n)

### ✅ When **O(log n)** is optimal
- Binary search in sorted array → O(log n)
- Height of balanced BST → O(log n)

### ✅ When **O(1)** is optimal
- Access element in array: `arr[i]`
- Insert at front in linked list
- Push/pop from stack

---

## 📊 Summary Table

| Problem Type                         | Optimal Time Complexity |
|-------------------------------------|--------------------------|
| Sorting arbitrary elements          | O(n log n)               |
| Sorting limited range (like 0s/1s)  | O(n)                     |
| Searching in sorted array           | O(log n)                 |
| Single scan problems                | O(n)                     |
| Constant time ops (array index)     | O(1)                     |

---

✅ So: **O(n log n) is not universal**—many problems can go faster with structure or constraints.
