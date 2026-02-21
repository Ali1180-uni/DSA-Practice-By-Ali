# DSA Practice By Ali 🚀

[![GitHub](https://img.shields.io/badge/GitHub-Ali1180--uni-blue?style=flat&logo=github)](https://github.com/Ali1180-uni/DSA-Practice-By-Ali)
[![Language](https://img.shields.io/badge/Language-C++-00599C?style=flat&logo=c%2B%2B)](https://isocpp.org/)

A comprehensive collection of Data Structures and Algorithms implementations in C++, developed during my 3rd semester at NTU. This repository serves as both a learning journey and a reference for fundamental DSA concepts.

---

## 📚 Table of Contents

- [Overview](#overview)
- [Repository Structure](#repository-structure)
- [Topics Covered](#topics-covered)
- [Lab Work](#lab-work)
- [How to Use](#how-to-use)
- [Compilation & Execution](#compilation--execution)
- [LeetCode Practice](#leetcode-practice)
- [Progress Tracker](#progress-tracker)
- [Contributing](#contributing)

---

## 🎯 Overview

This repository contains implementations of various data structures and algorithms, including:
- **Arrays** - Search and Sort algorithms
- **Linked Lists** - Singly, Doubly, and Circular implementations
- **Stacks** - Array and Linked List based implementations
- **Queues** - Array and Linked List based implementations
- **Trees** - Binary Search Trees with traversals and visualizers
- **Heaps** - Min Heap and Max Heap implementations
- **Graphs** - Algorithm visualizers
- **Pointers** - Dynamic memory management and advanced pointer operations
- **Recursion** - Recursive problem solving techniques
- **LeetCode Practice** - 50+ problems solved
- **Lab Assignments** - Practical problems and solutions from lab sessions

Each implementation is well-commented and designed to demonstrate core concepts clearly.

---

## 📂 Repository Structure

```
DSA/
│
├── Arrays/
│   ├── Array Search/
│   │   └── Basic Search.cpp              # Linear and Binary Search
│   └── Array Sort/
│       ├── BuubleSort.cpp                # Bubble Sort Implementation
│       ├── InsertionSort.cpp             # Insertion Sort Implementation
│       └── SelectionSort.cpp             # Selection Sort Implementation
│
├── Linked List/                          # 8 implementations
│   ├── Linked List Basic.cpp             # Singly Linked List basics
│   ├── Linked List Practice.cpp          # Advanced singly linked list
│   ├── All in One Linked List.cpp        # Complete linked list operations
│   ├── Double Linked List.cpp            # Doubly Linked List
│   ├── Double Circular Linked List.cpp   # Double Circular Linked List
│   ├── Circular Linked List.cpp          # Circular Linked List
│   ├── Circular Linked List JospehProblem.cpp  # Josephus Problem Solution
│   └── DIff Josphus.cpp                  # Alternative Josephus approach
│
├── Stack/                                # 5 implementations
│   ├── Basic of Stack.cpp                # Stack fundamentals
│   ├── Stack with Linked List.cpp        # Stack using Linked List
│   ├── Decimal to Binary Conversion.cpp  # Base conversion using stack
│   ├── Equation Solver with precedence.cpp  # Infix evaluation
│   └── Prefix Precedence.cpp             # Prefix expression handling
│
├── Queue/                                # 2 implementations
│   ├── Basic Queue with Array.cpp        # Queue using array
│   └── Basic Queue with Linked List.cpp  # Queue using linked list
│
├── Trees/                                # 5 implementations + visualizers
│   ├── Binary Search Tree.cpp            # BST with Insert, Delete, Traversals
│   ├── Recursive BST.cpp                 # Recursive BST implementation
│   ├── In Order Tree.cpp                 # In-order traversal
│   ├── Pre Order Tree.cpp                # Pre-order traversal
│   ├── Post Order Tree.cpp               # Post-order traversal
│   └── Visual Understanding Tools/       # Interactive HTML visualizers
│       ├── All Tree Traversal Recursive Understanding.html
│       ├── AVL visual Understanding.html
│       ├── AVL with DELETE Visuallizer.html
│       ├── B-Tree Visuallizer.html
│       └── Delete_BST_Visuallzer.html
│
├── Heap/                                 # 6 implementations
│   ├── MaxHeap.cpp                       # Max Heap implementation
│   ├── MinHeap.cpp                       # Min Heap implementation
│   ├── Delete in Max Heap.cpp            # Deletion in Max Heap
│   ├── Delete in Min Heap.cpp            # Deletion in Min Heap
│   ├── Find in Max Heap.cpp              # Search in Max Heap
│   └── Find in Min Heap.cpp              # Search in Min Heap
│
├── Graph/
│   └── Searching Algo Visuallizers.html  # Graph algorithm visualizer
│
├── Pointers/                             # 2 implementations
│   ├── Pointers & Heaps.cpp              # Dynamic memory allocation
│   └── Pointers with 2D Array.cpp        # 2D array manipulation
│
├── Practice/
│   ├── Leet/                             # LeetCode practice (50+ problems)
│   │   ├── Daily Challenges/             # Daily LeetCode challenges
│   │   └── Treasure Problems/            # Classic LeetCode problems
│   ├── Recursions/                       # Recursion practice
│   │   ├── Pow(x,n).cpp
│   │   ├── Power of 3.cpp
│   │   ├── Power of 4.cpp
│   │   └── Print n Numbers.cpp
│   ├── Text Editor Project/              # Project implementation
│   │   └── TxtEditor.cpp
│   └── Uni Questions/                    # University practice questions
│       ├── 2D Arrays.cpp
│       ├── 2D Array With Pointers.cpp
│       ├── Full Linked List.cpp
│       ├── Josephus Problem.cpp
│       ├── Circlular List.cpp
│       ├── ArraySquare.cpp
│       └── Star Pattern.cpp
│
├── Labs/
│   ├── Lab Plan 1/                       # Sorting & Searching (4 files)
│   ├── Lab Plan 2/                       # Basics & Functions (11 files)
│   ├── Lab Plan 3/                       # OOP & Pointers (15 files)
│   ├── Lab Plan 4/                       # Linked Lists (4 files)
│   ├── Lab Plan 5/                       # Double Linked Lists (5 files)
│   ├── Lab Plan 6/                       # Stack Applications (6 files)
│   ├── Lab Plan 7/                       # Recursion (8 files)
│   ├── Lab Plan 8/                       # BST Operations (4 files)
│   └── Lab Plan 9/                       # Heap Operations (6 files)
│
└── Quizes/
    ├── Lab Assesment 1/                  # Assessment preparation (5 files)
    │   ├── Linked List all in one.cpp
    │   ├── Queue Assesment Solve.cpp
    │   ├── stack and Queue.cpp
    │   ├── Stack Assesment Solve.cpp
    │   └── Stack Implementations.cpp
    └── Quiz 1/                           # Quiz preparation (6 files)
        ├── All 3 Sorts.cpp
        ├── Linked List All Practice.cpp
        ├── Pointer with 2D array.cpp
        ├── Pointer with dynamic 2D array.cpp
        ├── Practice Pointer 1.cpp
        └── Searching Algo Practice.cpp
```

---

## 🧠 Topics Covered

### ✅ Completed

#### 1. **Arrays**
- [x] Linear Search
- [x] Binary Search
- [x] Bubble Sort
- [x] Insertion Sort
- [x] Selection Sort
- [x] 2D Arrays
- [x] Dynamic Array Allocation

#### 2. **Pointers**
- [x] Basic Pointer Operations
- [x] Pointers with Arrays
- [x] Pointers with 2D Arrays
- [x] Dynamic Memory Allocation (Heap)
- [x] Pass by Reference vs Pass by Value

#### 3. **Linked Lists**
- [x] Singly Linked List (Insert, Delete, Search)
- [x] Doubly Linked List
- [x] Circular Linked List
- [x] Double Circular Linked List
- [x] Josephus Problem
- [x] Linked List with Getters/Setters
- [x] All-in-One Linked List Operations

#### 4. **Stack**
- [x] Stack using Arrays
- [x] Stack using Linked Lists
- [x] Decimal to Binary Conversion
- [x] Infix to Postfix Conversion
- [x] Expression Evaluation with Precedence
- [x] Prefix Expression Handling
- [x] Parentheses Balance Checker

#### 5. **Queue**
- [x] Basic Queue using Array
- [x] Basic Queue using Linked List

#### 6. **Trees**
- [x] Binary Search Tree (Insert, Delete, Search)
- [x] Recursive BST Implementation
- [x] In-order Traversal
- [x] Pre-order Traversal
- [x] Post-order Traversal
- [x] Min/Max Node Finding
- [x] Interactive Tree Visualizers (HTML)
- [x] AVL Tree Visualizer
- [x] B-Tree Visualizer

#### 7. **Heap**
- [x] Max Heap Implementation
- [x] Min Heap Implementation
- [x] Insert in Heap
- [x] Delete in Heap
- [x] Find/Search in Heap
- [x] Heapify Operations

#### 8. **Graph**
- [x] Graph Algorithm Visualizer (HTML)

#### 9. **Recursion**
- [x] Factorial (Iterative & Recursive)
- [x] Power/Exponent Functions
- [x] Fibonacci Series
- [x] Sum of N Numbers
- [x] Power of 3, 4, n Problems

#### 10. **Object-Oriented Programming**
- [x] Classes and Objects
- [x] Constructors and Destructors
- [x] Encapsulation (Getters and Setters)
- [x] Function Overloading
- [x] Operator Overloading

#### 11. **LeetCode Practice (50+ Problems)**
- [x] Array Problems (Two Sum, Merge Arrays, etc.)
- [x] String Problems (Roman to Integer, Valid Parenthesis)
- [x] Math Problems (Sqrt, isPerfectSquare, isHappy)
- [x] Bit Manipulation
- [x] Dynamic Programming Basics

---

## 🧪 Lab Work

### Lab Plan 1 - Sorting & Searching (4 Questions)
Focus: Fundamental algorithms
- Basic Search (Linear & Binary)
- Bubble Sort
- Insertion Sort
- Selection Sort

### Lab Plan 2 - Basics & Functions (11 Questions)
Focus: Fundamentals, loops, recursion, strings
- Swap numbers
- Reverse arrays
- Separate odd/even
- Area calculations
- Sum operations
- Factorial (iterative & recursive)
- Multiplication table
- Number guessing game
- String operations

### Lab Plan 3 - OOP & Pointers (15 Questions)
Focus: Classes, pointers, arrays
- Class implementations (Area, Student, Distance)
- Pointer operations (swap, sum, array)
- Array sorting (ascending)
- Function overloading
- Getters and setters
- Dynamic memory
- Find array size with pointers

### Lab Plan 4 - Linked Lists (4 Questions)
Focus: Singly Linked List operations
- Node class implementation
- List class with Add, Delete, Display
- Insert at specific position
- Min/Max/Sort/Search operations (MMSSI)

### Lab Plan 5 - Double Linked Lists (5 Questions)
Focus: Doubly Linked Lists & Advanced Operations
- Doubly Linked List with traversal
- Linked List with Getters/Setters
- Circular Linked List
- Josephus Problem implementation

### Lab Plan 6 - Stack Applications (6 Questions)
Focus: Stack-based problem solving
- Stack class implementation
- Stack with operations
- Balance checker (parentheses matching)
- Decimal to binary conversion
- Infix to Postfix conversion
- Postfix expression evaluation

### Lab Plan 7 - Recursion (8 Questions)
Focus: Recursive functions and problem solving
- Factorial (function & recursion)
- Raise to Power (function & recursion)
- Fibonacci series (function & recursion)
- Sum of n numbers (function & recursion)

### Lab Plan 8 - BST Operations (4 Questions)
Focus: Binary Search Tree operations
- BST implementation
- Find Maximum in BST
- Find Minimum in BST
- Search in BST

### Lab Plan 9 - Heap Operations (6 Questions)
Focus: Heap data structure
- Max Heap implementation
- Min Heap implementation
- Delete in Max Heap
- Delete in Min Heap
- Find in Max Heap
- Find in Min Heap

---

## 💻 How to Use

### Prerequisites
- C++ Compiler (GCC, MinGW, or MSVC)
- Basic understanding of C++ syntax
- Code editor (VS Code, Code::Blocks, Dev-C++)

### Compilation & Execution

#### Using GCC/G++ (Command Line)
```bash
# Navigate to the file directory
cd "d:\Ntu Workspace\3rd Semester\DSA\Stack"

# Compile
g++ "Stack with Linked List.cpp" -o Stack_LL

# Run
./Stack_LL
```

#### Using Windows PowerShell
```powershell
# Navigate to directory
cd "d:\Ntu Workspace\3rd Semester\DSA\Stack"

# Compile
g++ "Stack with Linked List.cpp" -o Stack_LL.exe

# Run
.\Stack_LL.exe
```

#### Using VS Code
1. Open the `.cpp` file
2. Press `Ctrl + Shift + B` to build
3. Run from terminal or use Code Runner extension

---

## 💻 LeetCode Practice

The `Practice/Leet/` folder contains 50+ LeetCode problems organized into:

### Daily Challenges (40+ Problems)
| Problem | Category |
|---------|----------|
| Two Sum | Arrays |
| Valid Parenthesis | Stack/String |
| Roman to Integer | String |
| Merge Arrays | Arrays |
| Array Zero Problem | Arrays |
| Min Operations Problems | Math |
| Permutation Problem | Backtracking |
| isHappy | Math |
| Sqrt() Raw | Math |
| Perfect Square | Math |
| Bit Manipulation | Bitwise |
| String Column Sort | String |
| And many more... | |

### Treasure Problems (5 Problems)
| Problem | Description |
|---------|-------------|
| 2n Array | Array manipulation |
| Find Max Consecutive Ones | Array traversal |
| Missing Number | Array/Math |
| Shuffle Array | Array manipulation |
| Smaller Numbers Than Current | Sorting/Counting |

---

## 📊 Progress Tracker

### Core Data Structures
| Topic | Files | Status | Completion |
|-------|-------|--------|-----------|
| Arrays | 4 | ✅ Complete | 100% |
| Pointers | 2 | ✅ Complete | 100% |
| Linked Lists | 8 | ✅ Complete | 100% |
| Stack | 5 | ✅ Complete | 100% |
| Queue | 2 | ✅ Complete | 100% |
| Trees | 5 + 5 visualizers | ✅ Complete | 100% |
| Heap | 6 | ✅ Complete | 100% |
| Graph | 1 visualizer | ✅ Complete | 100% |

### Practice & Problems
| Topic | Files | Status | Completion |
|-------|-------|--------|-----------|
| LeetCode Daily | 40+ | ✅ Active | Ongoing |
| LeetCode Treasure | 5 | ✅ Complete | 100% |
| Recursion Practice | 4 | ✅ Complete | 100% |
| Uni Questions | 7 | ✅ Complete | 100% |
| Text Editor Project | 1 | ✅ Complete | 100% |

### Lab Work
| Lab | Questions | Focus | Status |
|-----|-----------|-------|--------|
| Lab Plan 1 | 4 | Sorting & Searching | ✅ Complete |
| Lab Plan 2 | 11 | Basics & Functions | ✅ Complete |
| Lab Plan 3 | 15 | OOP & Pointers | ✅ Complete |
| Lab Plan 4 | 4 | Linked Lists | ✅ Complete |
| Lab Plan 5 | 5 | Double Linked Lists | ✅ Complete |
| Lab Plan 6 | 6 | Stack Applications | ✅ Complete |
| Lab Plan 7 | 8 | Recursion | ✅ Complete |
| Lab Plan 8 | 4 | BST Operations | ✅ Complete |
| Lab Plan 9 | 6 | Heap Operations | ✅ Complete |

### Quizzes & Assessments
| Assessment | Files | Status |
|------------|-------|--------|
| Quiz 1 | 6 | ✅ Complete |
| Lab Assessment 1 | 5 | ✅ Complete |

**Total Files:** 120+ C++ implementations  
**Labs Completed:** 9/9 (63 lab questions)  
**LeetCode Problems:** 50+ solved  
**Visualizers:** 6 interactive HTML tools  
**Overall Progress:** 100% Core Topics Complete

---

## 📝 Code Style Guidelines

This repository follows these conventions:
- **Class Names:** PascalCase (e.g., `Node`, `List`, `Stack`)
- **Function Names:** PascalCase (e.g., `Add()`, `Delete()`, `Show()`)
- **Variable Names:** PascalCase for class members, camelCase for locals
- **Comments:** Inline comments for complex logic
- **Indentation:** Tabs (as per project preference)

---

## 🔍 Key Implementations

### Linked List Operations
```cpp
class List {
    private:
        Node *First, *Last;
    public:
        void Add(int data);      // Add node at end
        void Delete(int data);   // Delete specific node
        void Show();             // Display list
        void AddBtwn(int num);   // Insert at position
};
```

### Stack Operations
```cpp
class Stack {
    private:
        Node *Top;
    public:
        void Push(int data);     // Add element
        int Pop();               // Remove element
        bool isEmpty();          // Check if empty
        void Display();          // Show stack
};
```

### Binary Search Tree Operations
```cpp
class BST {
    private:
        Node *root;
    public:
        void Insert(int data);   // Insert node
        void Delete(int data);   // Delete node
        bool Search(int data);   // Search for value
        int FindMin();           // Find minimum value
        int FindMax();           // Find maximum value
        void InOrder();          // In-order traversal
        void PreOrder();         // Pre-order traversal
        void PostOrder();        // Post-order traversal
};
```

### Heap Operations
```cpp
class MaxHeap {
    private:
        int *heap;
        int size, capacity;
    public:
        void Insert(int data);   // Insert with heapify up
        int Delete();            // Delete max with heapify down
        int Find(int data);      // Search in heap
        void Display();          // Show heap array
};
```

---

## 🤝 Contributing

This is a personal learning repository, but suggestions and improvements are welcome!

If you find any bugs or have suggestions:
1. Open an issue
2. Suggest improvements
3. Share alternative implementations

---

## 📧 Contact

**Ali**  
- GitHub: [@Ali1180-uni](https://github.com/Ali1180-uni)
- Repository: [DSA-Practice-By-Ali](https://github.com/Ali1180-uni/DSA-Practice-By-Ali)

---

## 📜 License

This repository is for educational purposes. Feel free to use the code for learning and reference.

---

## 🙏 Acknowledgments

- NTU - 3rd Semester DSA Course
- Lab instructors and teaching assistants
- C++ documentation and community resources

---

<div align="center">

**⭐ If you find this repository helpful, please consider giving it a star! ⭐**

Made with ❤️ by Ali | Last Updated: February 22, 2026

</div>
