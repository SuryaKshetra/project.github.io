# Course Learning Reflections


## 1.What are the kinds of problems we see in the nature? (iteration, recursion, backtracking)

### iteration-
Division of cells follow an iterative process to grow and divide which can be studied to come up with
efficient algorithms.

### recursion-
the way how petals or leaf of flowers arrange themselves or patterns on the flower show recursion. Most of these are based on the golden ratio or the
fibonacci series.

### backtracking-
from algorithms case studies we observed how the e.coli bacteria efficiently solves mazes. This system of solving is based on the idea of backtracking and retracing.

## 2.What is space and time efficiency? Why are they important? Explain the different class of problems and orders of growth
### Space and time efficiency-
it refers to how efficient an algorithm is in regards to reducing space and time cost.
They are important to differ between n different algorithms based on the same problem and choose the ones which work the best in all scenarios.

### Class of problems and orders of growth

Big O Notation (Worst-Case Complexity)

Describes the upper bound of algorithm's growth rate:

O(1) - Constant Time

It has fixed runtime regardless of input size

Examples: Array access, simple arithmetic operations

O(log n) - Logarithmic Time

it Runtime grows logarithmically

Examples: balanced tree operations


O(n) - Linear Time

Runtime grows linearly with input size

Examples: Linear traversing an array


O(n log n) - Linearithmic Time

Efficient sorting algorithms

Examples: Merge sort, heap sort

O(n²) - Quadratic Time


## 3.Take away from different design principles from chapter 2


## 4.The hierarchical data and how different tree data structures solve and optimize over the problem scenarios (tree, bst, avl, 2-3, red-black, heap, trie)

Hierarchical data refers to data that is organized in a tree-like structure, where each piece of data (node) has a parent-child relationship with other data elements.

### Tree data structures and their optimization

1.AVL Tree(0,1,-1)

used for Balancing the BST by maintaining a height difference of at most 1 between subtrees.

Optimization: Guarantees O(log n) time for search, insertion, and deletion but requires rebalancing operations.

2. 2-3 Tree

Ensures balance by having 2 or 3 children per node.

Optimization: Provides consistent height, making operations predictable and efficient.

3. Red-Black Tree

Self-balancing BST with less stringent balancing rules than AVL.

Optimization: Efficient insertion and deletion (O(log n)) with fewer rotations compared to AVL, making it suitable for dynamic datasets.

4.Heap
finds the smallest or largest element efficiently and it is called Priority-based operation

Optimization: Used in algorithms like Dijkstra's and O(log n) for insertions and deletions.

5.Trie (Prefix Tree)

stores and retrieves strings or sequences(dictionary applications)

Optimization: Minimizes redundancy and O(L) search time.


## 5.The need of array query algorithms and their implications. Their applications and principles need to be discussed

### Array query algorithm-

Algorithms that work on array operations like delete, compare, update,etc to perform a particular function refers to array query algorithm.
The need for array query algorithms arises from the necessity to handle large datasets or real-time data processing where the array is being accessed
frequently or needs to be updated dynamically.

### Principles-

Divide and Conquer - Breaking queries into smaller subproblems for efficient computation.

Dynamic Programming - Storing intermediate results to avoid redundant calculations.

Optimization - Balancing preprocessing time with query time to achieve overall efficiency.

### Some important examples are-

1. Binary Search(Binary index tree)-

Principle: Divide and conquer strategy

Efficiency: O(log n) 

Requirements: Sorted array

Applications: used in Large sorted databases


4. Segment Tree-

Principle: Divide array into segments

Efficiency: O(log n) 

Applications: Range min/max queries


## 6.Differentiate between tree and graphs and their traversals. List The applications of each

A tree is a special type of graph that is connected and acyclic. It has a hierarchical structure with one root node, and each node can have one or more child nodes.
A tree consists of nodes connected by edges and does not have any cycles.

Graph is a structure consisting of n vertices each connected by edges. It is cyclic in nature and can contain multiple paths between same vertices.

### Traversals:

In trees, common traversals include in-order, pre-order, post-order, and level-order. 

In graphs, traversals include depth-first search (DFS) and breadth-first search (BFS).

### Applications:

Trees: Used in hierarchical data like file systems, database indexing, and syntax trees.

Graphs: Applied in networks, social media, shortest path problems, and dependency resolution.

## 7.Deliberate on sorting and searching algorithms, the technique behind each and they connect to real world

### Sorting algorithms-

1.Bubble Sort-
Technique: Repeatedly compares adjacent elements and swaps them if they are in the wrong order. This process continues until the entire list is sorted.

Complexity: O(n²) in the worst and average cases.

Real-World Use: Used for small datasets or as an educational example to explain sorting concepts.

2.Selection Sort-
Technique: Finds the smallest element in the unsorted portion of the list and swaps it with the first unsorted element.

Complexity: O(n²) in all cases.

Real-World Use: Suitable for situations where minimizing the number of swaps is important, such as in memory-limited devices.

3.Insertion Sort-
Technique: Builds the sorted list one element at a time by inserting each new element into its correct position.

Complexity: O(n²) in the worst case but O(n) in the best case (nearly sorted lists).

Real-World Use: Efficient for small or nearly sorted datasets, such as organizing cards by hand.

4.Merge Sort-
Technique: A divide-and-conquer algorithm that splits the list into halves, recursively sorts them, and then merges the sorted halves.

Complexity: O(n log n) in all cases.

Real-World Use: Used for sorting large datasets, external sorting, and stable sorting requirements like databases or linked lists.

5.Quick Sort-
Technique: Another divide-and-conquer method, which partitions the array around a pivot and recursively sorts the partitions.

Complexity: O(n log n) on average but O(n²) in the worst case (bad pivot selection).

Real-World Use: Preferred for general-purpose sorting in programming libraries due to its efficiency and in-memory sorting.

6.Heap Sort-
Technique: Builds a max-heap (or min-heap) from the input data, repeatedly extracts the maximum (or minimum) element, and rebuilds the heap.

Complexity: O(n log n) in all cases.

Real-World Use: Useful in priority queues and scenarios requiring in-place sorting.


### Searching algorithms-

1. Linear Search:

Technique: Linear Search sequentially checks each element of the array or list until the desired element is found.

Time Complexity: O(n)

Real-World Application: Linear Search is simple and useful when working with unsorted data or small data sets, such as searching for a 
specific item in an inventory list or a short contact list.


2. Binary Search:

Technique: Binary Search works on sorted arrays. It repeatedly divides the search space in half, comparing the target value with the 
middle element and eliminating half of the remaining elements each time.

Time Complexity: O(log n)

Real-World Application: Binary Search is used extensively in applications where fast search times are critical, such as database indexing, file systems, 
or finding elements in sorted lists (e.g., searching for a word in a dictionary).


3. Hashing:

Technique: Hashing involves mapping each element to a unique hash code (using a hash function) and storing it in a hash table. This allows for near-constant 
time complexity for searching, insertion, and deletion.

Time Complexity: O(1) 

Real-World Application: Hashing is widely used in situations requiring fast lookups, such as in caches, databases, password storage, and compilers (symbol tables).

4. Depth-First Search (DFS) and Breadth-First Search (BFS):

Technique: DFS and BFS are used for searching through graphs and trees. DFS explores as far as possible down each branch before backtracking, 
while BFS explores all nodes at the present depth before moving on to the next level.

Time Complexity: O(V + E) for both, where V is the number of vertices and E is the number of edges.

Real-World Application:
DFS and BFS are used in applications like web crawling, network routing, pathfinding in games, and social media.


## 8.Discuss the importance of graph algorithms with respect to spanning trees and shortest paths

### Spanning Trees :

1.Kruskal's Algorithm-

Sorts edges by weight.

Add lowest-weight edges without creating cycles

2.Prim's Algorithm-

Start from single node.

Grow tree by adding lowest-weight connected edges

### Shortest Path Algorithms: Navigation Optimization

1.Dijkstra's Algorithm-

Purpose: Find shortest path in weighted graphs

Applications: GPS navigation and Transportation planning

2.Floyd-Warshall Algorithm: Computes all-pairs shortest paths.

### Real-World Relevance-

Spanning tree algorithms ensure resource efficiency in building interconnected systems like utility grids.

Shortest path algorithms are essential for real-time decision-making.


## 9.Discuss about the different studied algorithm design techniques

1.Brute Force: Explores all possible solutions, guaranteeing an answer but is computationally expensive. Best for small inputs or verifying algorithms.

2.Recursive Algorithms: Solve problems by breaking them into smaller, similar subproblems, with a base case to terminate. Examples include factorials and tree traversals.

3.Divide and Conquer: Breaks problems into independent subproblems, solves them, and combines results. Examples include Merge Sort and Quick Sort.

4.Dynamic Programming: Solves problems by breaking them into subproblems, storing results to avoid recomputation. Used in Fibonacci sequences and the Knapsack Problem.






