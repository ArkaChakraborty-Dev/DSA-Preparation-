# Data Structures and Algorithms in C++

A structured repository documenting my journey of learning, implementing, practising, and revising Data Structures and Algorithms using **C++**.

This repository contains topic-wise implementations, algorithm practice, LeetCode problems, important problem-solving patterns, and revision material, following a structured roadmap focused on strengthening problem-solving and interview preparation.

## Repository Goals

- Strengthen problem-solving and algorithmic thinking.
- Understand the implementation of fundamental data structures and algorithms.
- Practise common coding interview patterns.
- Develop efficient solutions with an understanding of time and space complexity.
- Maintain a structured collection of C++ implementations and revision notes.

## Language and Tools

- **Language:** C++
- **IDE:** Visual Studio Code
- **Compiler:** GCC / MinGW
- **Platform:** LeetCode
- **Version Control:** Git and GitHub

## Repository Structure

```text
DSA/
│
├── Phase 1/
│   ├── BasicCPP(STL)/
│   ├── HasFrequency/
│   │   └── ImpPatterns/
│   └── Search/
│
├── Sorting/
│   ├── BubbleSort.cpp
│   ├── SelectionSort.cpp
│   ├── InsertionSort.cpp
│   ├── MergeSort.cpp
│   └── QuickSort.cpp
│
├── Revision/
│   └── leetcode/
│       ├── Phase 1/
│       └── Phase 2/
│
├── README.md
└── .gitignore
```

*The structure will evolve as more topics and problems are implemented.*

---

# Learning Roadmap

The following roadmap is divided into six stages. Topics are considered complete only after understanding the concept and demonstrating the ability to implement or solve problems independently.

## Stage 0 — Continue Current Foundation

### Topics

- Arrays and vectors recap
- Linear search
- Reverse an array
- Check if array is sorted
- Bubble sort
- Selection sort
- Insertion sort
- Merge sort — understand merge step
- Merge sort — implement independently
- Quick sort — concept and implementation
- Recursion basics
- Time complexity and space complexity
- C++ STL: vector, string, pair
- C++ STL: map, unordered_map, set, unordered_set
- C++ STL: stack, queue, deque, priority_queue
- sort, lower_bound, upper_bound
- Prefix sums
- Hash frequency patterns
- Kadane's algorithm
- Binary search template
- Binary search on answer

### Foundation Exit Check

- [ ] I can implement merge sort without help.
- [ ] I can explain O(n), O(n log n), O(log n), and O(n²).
- [ ] I can choose suitable STL containers.
- [ ] I can solve basic prefix-sum and hash-map questions.

---

## Stage 1 — Core Interview Patterns

### Arrays and Hashing

- Contains Duplicate
- Valid Anagram
- Two Sum
- Group Anagrams
- Top K Frequent Elements
- Product of Array Except Self
- Valid Sudoku
- Encode and Decode Strings
- Longest Consecutive Sequence

### Two Pointers

- Valid Palindrome
- Two Sum II - Input Array Is Sorted
- 3Sum
- Container With Most Water
- Trapping Rain Water

### Sliding Window

- Best Time to Buy and Sell Stock
- Longest Substring Without Repeating Characters
- Longest Repeating Character Replacement
- Permutation in String
- Minimum Window Substring
- Sliding Window Maximum

### Stack and Monotonic Stack

- Valid Parentheses
- Min Stack
- Evaluate Reverse Polish Notation
- Generate Parentheses
- Daily Temperatures
- Car Fleet
- Largest Rectangle in Histogram
- Next Greater Element pattern

### Binary Search

- Binary Search
- Search a 2D Matrix
- Koko Eating Bananas
- Find Minimum in Rotated Sorted Array
- Search in Rotated Sorted Array
- Time Based Key-Value Store
- Median of Two Sorted Arrays — advanced

### Greedy and Intervals

- Maximum Subarray
- Jump Game
- Jump Game II
- Gas Station
- Insert Interval
- Merge Intervals
- Non-overlapping Intervals
- Meeting Rooms
- Meeting Rooms II

### Stage 1 Exit Check

- [ ] I can identify two pointers, sliding window, stack, interval, and binary-search patterns.
- [ ] I can solve common Easy and Medium questions without watching a solution.
- [ ] I can explain the brute-force and optimized approach.

---

## Stage 2 — Core Data Structures

### Linked Lists

- Reverse Linked List
- Merge Two Sorted Lists
- Reorder List
- Remove Nth Node From End of List
- Add Two Numbers
- Linked List Cycle
- Find the Duplicate Number
- Copy List with Random Pointer
- LRU Cache — advanced
- Merge k Sorted Lists — advanced
- Reverse Nodes in k-Group — advanced

### Trees and BST

- Invert Binary Tree
- Maximum Depth of Binary Tree
- Diameter of Binary Tree
- Balanced Binary Tree
- Same Tree
- Subtree of Another Tree
- Binary Tree Level Order Traversal
- Binary Tree Right Side View
- Count Good Nodes in Binary Tree
- Validate Binary Search Tree
- Kth Smallest Element in a BST
- Lowest Common Ancestor of a BST
- Construct Tree from Preorder and Inorder
- Binary Tree Maximum Path Sum — advanced
- Recursive DFS traversal
- Iterative DFS traversal
- BFS / level-order traversal

### Heap and Trie

- Kth Largest Element in a Stream
- Last Stone Weight
- K Closest Points to Origin
- Kth Largest Element in an Array
- Task Scheduler
- Find Median from Data Stream
- Implement Trie
- Design Add and Search Words
- Word Search II — advanced

---

## Stage 3 — Backtracking and Graphs

### Backtracking

- Subsets
- Combination Sum
- Permutations
- Subsets II
- Combination Sum II
- Word Search
- Palindrome Partitioning
- Letter Combinations of a Phone Number
- N-Queens

### Graph Fundamentals

- Adjacency list representation
- BFS template
- DFS template
- Number of Islands
- Max Area of Island
- Clone Graph
- Rotting Oranges
- Pacific Atlantic Water Flow
- Surrounded Regions
- Graph Valid Tree
- Number of Connected Components
- Course Schedule
- Course Schedule II
- Topological sort
- Union-Find / DSU
- Redundant Connection

### Advanced Graph Topics

- Dijkstra's algorithm
- Minimum spanning tree intuition
- Min Cost to Connect All Points
- Network Delay Time
- Cheapest Flights Within K Stops
- Word Ladder
- Alien Dictionary — advanced
- Reconstruct Itinerary — advanced
- Swim in Rising Water — advanced

---

## Stage 4 — Dynamic Programming

### 1-D DP

- Climbing Stairs
- Min Cost Climbing Stairs
- House Robber
- House Robber II
- Decode Ways
- Coin Change
- Maximum Product Subarray
- Word Break
- Longest Increasing Subsequence
- Partition Equal Subset Sum
- Longest Palindromic Substring
- Palindromic Substrings

### 2-D DP

- Unique Paths
- Longest Common Subsequence
- Coin Change II
- Target Sum
- Interleaving String
- Longest Increasing Path in a Matrix
- Distinct Subsequences
- Edit Distance
- Best Time to Buy and Sell Stock with Cooldown
- Burst Balloons — advanced
- Regular Expression Matching — advanced

### DP Exit Check

- [ ] I can identify state, transition, base case, and answer.
- [ ] I can start with recursion and memoization.
- [ ] I can convert a familiar DP solution into tabulation.

---

## Stage 5 — Supporting Topics and Performance

### Math and Bit Manipulation

- Rotate Image
- Spiral Matrix
- Set Matrix Zeroes
- Happy Number
- Plus One
- Pow(x, n)
- Multiply Strings
- Detect Squares
- Single Number
- Number of 1 Bits
- Counting Bits
- Reverse Bits
- Missing Number
- Sum of Two Integers
- Reverse Integer

### Online Assessment and Interview Readiness

- [ ] Complete an Easy + Medium OA simulation in 60 minutes.
- [ ] Complete two Medium problems in 90 minutes.
- [ ] Practise stdin/stdout C++ input handling.
- [ ] Practise debugging without print statements.
- [ ] Explain 10 solved questions aloud.
- [ ] Complete 3 mock interview sessions.
- [ ] Maintain an error log.
- [ ] Reattempt weak questions without notes.
- [ ] Practise stating time and space complexity every time.

---

# Problem-Solving Approach

For each problem, aim to follow this process:

1. Understand the problem and identify the constraints.
2. Think of a brute-force solution first.
3. Identify the pattern or data structure that can optimise the solution.
4. Implement the solution independently.
5. Analyse time and space complexity.
6. Test edge cases.
7. Record mistakes and revisit difficult problems.

# Compiling and Running C++

Using GCC / MinGW:

```bash
g++ filename.cpp -o filename.exe
```

Run on Windows:

```bash
.\filename.exe
```

# Progress Philosophy

This repository is an ongoing record of practice and improvement.

A topic is not considered complete simply because its code has been written once. The goal is to understand the underlying approach, implement it independently, analyse complexity, and revisit it during revision.

**Consistency, independent problem-solving, and conceptual understanding matter more than the total number of solutions.**