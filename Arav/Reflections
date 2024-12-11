# 1).What are the kinds of problems we see in the nature? (iteration, recursion, backtracking)

Iteration: We see iteration process in day and night cycle every 24hrs. Migration of birds every year has a iterative pattern.

Recursion: It is observed in trees growth as each branch will have smaller branches and it continues 

Backtracking: We can see backtracking in most of the animals as they navigate in search of food and then backtrack to their place.

# 2).What is space and time efficiency? Why are they important? Explain the different class of problems and orders of growth

Space Efficiency - how much extra memory an algorithm takes.
Time Efficiency - how mucb time an algorithm takes to run.
They are dependent on how many times the basic operation of the algorithm takes place as more number of operations carried more time and space is consumed.
They are important to understand how a algorithm performs. As time and space are one of the most important factors, it helps in understanding the efficiency of the algorithm.

Orders Of Growth
It gives the time/space efficiency of algorithm when dealing with large amount of data.
Example:
O(1) - Constant time
O(logn) - Logarthmic time
O(n) - Linear time
O(nlogn) - loglinear time 
O(n^2) - quadratic time
O(2^n) - exponential time
O(n!) - factorial time

# 3).Take away from different design principles from chapter 2 (can use the notes provided)

-Decomposition: Simplifying the problem by breaking into smaller problems and focus on one problem at a time.

-Pattern Recognition: Identifying a repeating pattern helps in understanding the problem, generalize and find a solution.

-Abstraction: Birds eye view of a given problem, focusing on the important part.

-Brave and Cautious Traversal: 
->Brave traversal- we move until dead end is reached and then backtrack. We can see brave traversal in DFS(depth first search).
->Cautious traversal- We go level by level from left to right in each level. We see cautious traversal in BFS(breadth fisrt search).

-Pruning: Remove unnecessary and irrelevant parts of the problem. It increases the efficiency by reducing space and time.

-Lazy Propogation: Not updating the content until necessary, mostly used in segment trees. It reduces the unneccessary computations. It enables updates in logarthmic time.

-Sliding Window: To use the necessary data from the array and sliding window over unnecessary elements.
It helps in solving problems that use same array or subarrays.

-Level Order Traversal: Traversing a tree, level by level from left to right. It ensures complete traversal of a graph or a tree.

-Hierarchical Data: Setting the data in a parent and child relation. It is mainly used in trees structures. Easy access to data and understanding the links between data.

-Edge Relaxation: Updating the shortest path based on edge weight in graphs. Consider the paths and find the shortest one. Used in Dijkstra's.

-Balancing and Rotation: They are mainly used to remove the skewness in trees. Unbalanced trees leads to inefficient operations thats why we use rotation in AVL trees and Red-Black trees.

-Kleene closure: The transitive property helps to compute the transitive closure of a graph, identifying all connected vertex pairs. This is useful for applications like finding shortest paths.

-Precomputing: It is used to where we frequently use a calculated result. For efficiency we retrieve the data from the memory.

-Parental Dominance: To organize the data structure efficiently we have parent value larger or smaller than the child. In min heap we have the lowest value as the root node.

-Prefix and Suffix: Prefix and sufix help with various string operations. Pattern matching, string search, etc. Common prefix and sufix makes searching very efficient compared to the brute force method.

-Partitioning: It is used to divide a large problem into smaller sub-problems. Merge Sort divides and sorts.

-Bit Manipulation: It uses bitwise operations like AND, OR, XOR, and shifting to optimize memory. It’s crucial for efficient data structures like Fenwick trees uses bit manipulation to build data structure.

-Memoization: It optimizes recursive algorthms by storing the results of function calls. Used in dynamic programming to reduce overall time complexity.

-Invariants: They are conditions that remain constant during execution. Used in sorting.

-Shortest Path Trees: They are used to find the shortest path from one point to other points in DS. Mostly used in graph algorithms to find the best path in terms of length and cost.

# 4).The hierarchical data and how different tree data structures solve and optimize over the problem scenarios (tree, bst, avl, 2-3, red-black, heap, trie)
We started with basic tree data structure and to optimize it based on efficiency of searching data, inserting, deleting data we designed different tree structures.

Tree: We represent a hierarchical data with nodes and connected by edges in order to easily navigate through the data.

Binary Search Tree (BST): A binary tree where the left child is always smaller and the right child is larger to make seaching faster.

2-3 Tree: In order to balance the binary search tree we moved to introducing more than one item in a node. However this still caused skewness in the tree.

AVL Tree: A self balancing BST that ensures that the height difference (balanced factor) is 1

Red-Black Trees: A self balancing BST with color based rules that enforces balance during insertions and deletions, guaranteeing logarithmic time complexity for operations.

 Heap: A binary tree based structure used for priority queues. Here the root node has the highest or lowest priority, supporting efficient retrieval of the highest or lowest value in max heap or min heap.

Trie: It is used to manage data like dictionary searching based on prefix.


# 5).The need of array query algorithms and their implications. Their applications and principles need to be discussed

Array query algorithms are designed to efficiently handle common array operations searching, retrieve data for large data. we use different data structures like lookup table, segment trees, fenwick trees.
Lookup table is used when the data size is small or when data is static. Segment trees are used for large data and the space efficiency is nlogn.

# 6).Differentiate between tree and graphs and their traversals. The applications of each

Trees:
It is a hierarchical data structure with one single root and every node has a parent child relation.
Traversal is always from parent to child nodes. It is a acyclic graph.

Graph:
It has vertices connected with edges, each vertex can have multiple vertices connected through edges and we can traverse in any direction if it not a directed graph.
It is a tree with cycles.

Tree Traversal:
Level Order: Level by level from left to right.
Inorder: we go from left subtree to root to right subtree.
Preorder:  we go from root to left subtree to right subtree.
Postorder: we go from left subtree to right subtree to root.

Graph Traversal:
DFS: Moving until we reach the dead end and then backtracking.
BFS: visiting all nodes at that level then move to next level.

# 7).Deliberate on sorting and searching algorithms, the technique behind each and they connect to real world

Bubble Sort:	It compares the next element and swaps repeatedly until the array is sorted. It is a brute force approach.
Selection Sort: Selecting the smallest element and placing it at the beginning and repeating it for other elements. Used for small data 
Insertion Sort:	It places each element in its correct position like a gambler placing cards. Sorting small or nearly sorted data.
Merge Sort:	Divide the array and sort the halves and then merge them.	Divide and conquer approach. We use this to sort large datasets.
Quick Sort:	Selects a pivot and splits the array into two parts, sorting each part recursively. For large datasets.
Heap Sort: Using heap and getting the largest element or smallest element repeatedly and placing them. For priortizing datasets.

Linear Search:Checks each element in the array one by one until match is found. For small data searching.
Binary Search: Divides the sorted array in half each time to efficiently search for a target element. Implemented in sorted datasets.
Brute Force String Search:Compares every substring in the text with the target pattern.

# 8).Discuss the importance of graph algorithms with respect to spanning trees and shortest paths
Spanning Trees: A spanning tree is a subset of Graph, such that all the vertices are connected using minimum possible number of edges.

Prim’s Algorithm: This algorithm selects the path with least costly edges. Used in laying out cables.
Kruskal’s Algorithm: It connects all points without creating cycles. It’s useful for scattered data like connecting points on a map.

Shortest Paths: Shortest path algorithms are designed to find the fastest or most cost-effective route between two points, crucial for navigation, routing, and scheduling.

Dijkstra’s Algorithm: This algorithm identifies the quickest route by evaluating all possible paths. Used in navigating systems.
Bellman-Ford Algorithm: Effective for graphs with negative edge weights. It can detect negative weight cycles in graph.
Floyd-Warshall Algorithm: It gives all pair shortest path. Useful in transportation networks.
Warshall’s Algorithm: It tells if a path exists or not between any two nodes.

# 9).Discuss about the different studied algorithm design techniques.
Greedy Algorithms: It makes the local choice at each step with the hope of finding the global solution. Examples- Dijkstra's Algorithm or Huffman Coding.
Divide and Conquer: Divide a problem into sub-problems, solve each one, and combine the results. Examples- Merge Sort and Quick Sort.
Dynamic Programming: Breaking down a problem into smaller problems and finding the solution.
Backtracking: Get all possible solutions and prune that are irrelevant. Examples- N-Queens problem.


