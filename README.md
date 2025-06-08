# Leetcode-988.-Smallest-String-Starting-From-Leaf

# 🌿 Smallest String Starting From Leaf

This project solves the problem of finding the **lexicographically smallest string** that starts at a leaf and ends at the root of a binary tree. Each node in the tree contains a value from `0` to `25`, representing characters `'a'` to `'z'`.

---

## 🧠 Approach

- Perform a **DFS traversal** from root to all leaf nodes.
- While traversing, **build strings in reverse order** (leaf to root).
- At every **leaf node**, compare the built string with the current smallest (`mainans`), and update if it's smaller.

🧩 Key Details:
- `char(root->val + 'a')` is used to map the integer to its respective character.
- Strings are prepended (added to the front) since we need leaf-to-root order.

---

## ✅ Example

**Input Tree:**

```cpp

    0
   / \
  1   2
 /
3

```


- Leaf-to-root strings:
  - `"dba"` from node 3
  - `"cba"` from node 2

✅ Lexicographically smallest: `"cba"`

---

## ⏱ Time and Space Complexity

| Metric              | Value                      |
|---------------------|----------------------------|
| 🕒 Time Complexity   | `O(N * h)` where N = nodes, h = max string length |
| 💾 Space Complexity  | `O(h)` recursion stack + string copies |

---

## ✍️ Author

**Ridham Garg**  
🎓 B.Tech CSE | Thapar University, Patiala  
💡 Always eager to turn logical puzzles into elegant code!

---

🌟 Tip: Try solving this using a **min-heap** approach if you want a fun challenge!
