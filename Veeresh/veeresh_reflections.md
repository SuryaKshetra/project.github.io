# Course Reflections By Veeresh

## What are the kinds of problems we see in the nature? (iteration, recursion, backtracking) 

### Iteration:
- Basic water cycle is best example for iteration as it's explaination goes this way:<br>Water is evaporated from oceans, rivers, lakes, soil, etc. converting to vapour form. Water vapour in atmosphere is cooled and condensed which then forms clouds. Water droplets in clouds combine and become heavy enough to fall back to Earth as rain, snow, sleet, or hail. Precipitation that falls on land can flow over the surface as runoff, eventually reaching rivers and lakes. A portion of the precipitation seeps into the ground, replenishing groundwater.Plants absorb water from the ground and release it into the atmosphere through transpiration.<br><b>This cycle continues to the infinite time showing the perfect example for iteration.</b>
- Other examples for iteration are nitrogen cycle, food cycle, etc.

### Recursion:
- A branch of a tree trunk divides into two branches. Each of the branch is divided into sub-branches, and each sub-branch divides into nodes each node gives rise to leaves. <br><b>This is way of nature teaching us how recursion works.</b>

### Backtracking
- Animals often learn through a process of trial and error. They experiment with different behaviors or strategies to achieve a goal, like finding food or avoiding predators. If a particular approach fails, the animal may <b>backtrack</b> and try a different method. This iterative process of trying, failing, and adjusting allows animals to adapt to their environment and learn effective behaviors over time.

## What is space and time efficiency? Why are they important? Explain the different class of problems and orders of growth 
- <b>Space efficiency</b> refers to the amount of memory an algorithm requires to execute. It involves minimizing memory usage by optimizing data structures and reducing unnecessary storage. A space-efficient algorithm can handle larger datasets and run more efficiently on resource-constrained systems.
- <b>Time efficiency</b> measures the time an algorithm takes to complete its task. It involves reducing the number of operations performed, optimizing loops, and minimizing function calls. A time-efficient algorithm can process data faster and deliver results more quickly, especially for large-scale applications.
### Importance of space and time efficiency:
- Real-time systems such as ATMs or any payment gateway must process data and produce output within strict time constraints. Inefficient algorithms can lead to payment failures. This was one example; many others, such as Amazon, should open within a few seconds(if the network is good).
- Space efficient apps or any website give results to given output smoothly without producing a lag or taking much time. so space efficiency is the most important constraint.

### Orders of growth:
#### O(1): Constant Time: 
- Operations take a fixed amount of time, regardless of input size
- Example: Accessing an array element by index.

#### O(log n): Logarithmic Time 
- Time grows logarithmically with input size.   
- Example: Binary search

#### O(n): Linear Time
- Time grows linearly with input size.
- Example: Linear search.

#### O(n log n): Linearithmic Time
- Time grows as a product of n and log n.   
- Example: Merge sort, quick sort.

#### O(n^2): Quadratic Time
- Time grows quadratically with input size.
- Example: Bubble sort, insertion sort.

#### O(n^3): Cubic Time
- Time grows cubically with input size.
- Example: Matrix multiplication.


## Take away from different design principles from chapter 2 (can use the notes provided) 
- Decomposition: Divide a large problem into smaller, more manageable subproblems.
- Pattern Recognition: Identify recurring patterns in the problem to apply known solutions or algorithms.
Organizing and Representing Data
- Abstraction: Focus on the essential aspects of a problem, ignoring unnecessary details.
- Hierarchical Data: Organize data in a hierarchical structure, like a tree, to represent relationships between elements.
Searching and Traversing
- Brave Traversal (DFS): Explore a path as deep as possible before backtracking.
- Cautious Traversal (BFS): Explore all nodes at a given level before moving to the next level.
- Level Order Traversal: Traverse a tree level by level, from left to right.
- Shortest Path Trees: Find the shortest path between nodes in a graph, often used in routing algorithms.
Optimization Techniques
- Pruning: Eliminate unnecessary computations or search paths to improve efficiency.
- Lazy Propagation: Delay updates to data structures until they are strictly necessary, optimizing performance.
- Sliding Window: Process a fixed-size window of data as it moves through an array, useful for problems involving subarrays.
- Balancing and Rotation: Maintain the balance of tree-based data structures to ensure efficient operations.
- Kleene Closure: Find all possible paths between nodes in a graph, useful for connectivity analysis.
- Precomputing: Calculate and store results for future use, avoiding redundant computations.
- Memoization: Store the results of function calls to avoid redundant calculations, especially in recursive algorithms.
- Invariants: Identify conditions that remain true throughout an algorithm's execution, aiding in correctness proofs and optimizations.
#### Data Manipulation Techniques
- Bit Manipulation: Use bitwise operations to optimize memory usage and perform calculations efficiently.
- Partitioning: Divide a problem into smaller subproblems, often used in sorting and divide-and-conquer algorithms.
- Prefix and Suffix: Utilize prefix and suffix arrays to efficiently solve string-related problems.
- Edge Relaxation: Update estimated shortest path distances in graph algorithms like Dijkstra's algorithm.
- Parental Dominance: Organize data structures based on parent-child relationships, such as heaps.

## The hierarchical data and how different tree data structures solve and optimize over the problem scenarios (tree, bst, avl, 2-3, red-black, heap, trie)

**Tree Data Structures**

Tree data structures are used to represent hierarchical data. Different types of trees offer varying levels of efficiency and complexity, depending on the specific use case.

### Common Tree Data Structures

**1. Binary Tree**
- A binary tree is a fundamental data structure where each node has at most two children: a left child and a right child. This structure is versatile and can be used to represent hierarchical data, such as file systems, or to construct expression trees for evaluating mathematical expressions. However, binary trees can become unbalanced, leading to worst-case linear time complexity for operations like search, insertion, and deletion.

**2. Binary Search Tree (BST)**
- A Binary Search Tree (BST) is a specific type of binary tree with a crucial property: the left subtree of any node contains nodes with keys less than the node's key, while the right subtree contains nodes with keys greater than the node's key. This property makes BSTs highly efficient for operations like searching, insertion, and deletion. However, BSTs can become unbalanced, meaning that the heights of the subtrees can differ significantly. This imbalance can lead to worst-case linear time complexity for these operations. 

**3. AVL Tree**
 - An AVL tree is a self-balancing binary search tree that ensures efficient operations by maintaining a balanced structure. It achieves this balance by enforcing a strict height difference constraint: the heights of the two child subtrees of any node can differ by at most one. To maintain this balance, AVL trees use rotations, which are specific operations that restructure the tree. While AVL trees offer efficient performance, their implementation is more complex than a simple binary search tree due to the overhead of balancing operations.

**4. 2-3 Tree**
- A 2-3 tree is a self-balancing tree data structure that ensures efficient operations by maintaining a balanced structure. Unlike binary trees, 2-3 trees can have nodes with either one or two keys and two or three children. To maintain balance, 2-3 trees use splitting and merging operations. While 2-3 trees offer efficient performance, their structure is more complex than binary search trees or AVL trees, which can make implementation more challenging.

**5. Red-Black Tree**
- A Red-Black tree is a self-balancing binary search tree that maintains balance by assigning a color (red or black) to each node. By enforcing specific color properties, Red-Black trees ensure that the height of the tree remains logarithmic, leading to efficient operations. While Red-Black trees offer efficient performance, their implementation is more complex than a simple binary search tree or AVL tree due to the additional overhead of maintaining color properties and performing rotations to rebalance the tree.

**6. Heap**
- A heap is a complete binary tree that follows a specific ordering property. In a max heap, the value of each node is greater than or equal to the values of its children. Conversely, in a min heap, the value of each node is less than or equal to the values of its children. Heaps are commonly used to implement priority queues, where elements 1  are prioritized based on their values. However, heaps are not optimized for searching or traversing elements in a specific order, as their structure is primarily designed for efficient insertion and deletion of the highest or lowest priority element. 

**7. Trie**
- A Trie, also known as a prefix tree, is a tree-like data structure specifically designed for efficient storage and retrieval of strings. Each node in a Trie represents a character, and the path from the root to a leaf node forms a string. This structure allows for efficient prefix-based searching and pattern matching. However, Tries can consume significant space, especially for large sets of strings, as each node and edge in the Trie requires memory allocation.

## The need of array query algorithms and their implications. Their applications and principles need to be discussed 
## Principles of Array Query Algorithms

* **Divide and Conquer:** Break down problems into smaller subproblems for efficient solutions.
* **Dynamic Programming:** Store intermediate results to avoid redundant calculations.
* **Optimization:** Balance setup time and query time for optimal performance.

### Array Query Algorithms: What They Do

Array query algorithms enable efficient data processing by:

* **Accelerating Data Retrieval:** Quickly finding specific information within large datasets.
* **Facilitating Complex Data Operations:** Handling intricate data manipulation tasks.
* **Reducing Computational Overhead:** Minimizing unnecessary calculations.

### Examples of Array Query Techniques

**1. Binary Search (Binary Index Tree)**
* **How It Works:** Divides the search space in half with each iteration.
* **Time Complexity:** O(log n)
* **Requirement:** Sorted array
* **Applications:** Searching in large sorted datasets.

**2. Sliding Window Technique**
* **How It Works:** Maintains a fixed-size window over the data.
* **Time Complexity:** O(n)
* **Applications:** Analyzing network traffic, signal processing.

**3. Two Pointer Technique**
* **How It Works:** Uses two pointers to iterate over the data.
* **Time Complexity:** O(n)
* **Applications:** Removing duplicates, reversing arrays.

**4. Segment Tree**
* **How It Works:** Divides the array into segments for efficient range queries.
* **Time Complexity:** O(log n) for query and update operations.
* **Applications:** Range-based queries (e.g., finding minimum/maximum in a range).

## Differentiate between tree and graphs and their traversals. The applications of each
#### Cyclic Structure:

- Trees: Acyclic, no cycles.
- Graphs: Can be cyclic or acyclic.
#### Root Node:

- Trees: Single root node.
- Graphs: No specific root node.
#### Parent-Child Relationship:

- Trees: Each node (except the root) has one parent.
- Graphs: A node can have multiple parents.
#### Level-Based Structure:

- Trees: Organized into levels.
- Graphs: No strict level-based structure.
#### Traversal Methods:

- Trees: In-order, pre-order, post-order.
- Graphs: Depth-First Search (DFS), Breadth-First Search (BFS).

### Applications:

- Trees: Used in hierarchical data like file systems, database indexing, and syntax trees.
- Graphs: Applied in networks, social media, shortest path problems, and dependency resolution.

## Deliberate on sorting and searching algorithms, the technique behind each and they connect to real world
### Bubble Sort
- Bubble Sort works by going through the list and comparing two items next to each other. If they’re in the wrong order, it swaps them. This keeps happening until everything is in the right order. It’s not the best for big lists since it can take a long time (O(n²) in most cases). People usually use it for teaching or working with small lists.

### Selection Sort
- This method looks for the smallest number in the unsorted part of the list and swaps it with the first item that isn’t sorted yet. It keeps repeating until the whole list is sorted. While it’s not super fast (O(n²) every time), it’s useful when you need to keep the number of swaps low, like on devices with limited memory.

### Merge Sort
- Merge Sort splits the list into two halves, sorts each half, and then puts them back together in the right order. It does this over and over until everything is sorted. It’s consistent and takes O(n log n) time no matter the situation, making it good for big datasets or tasks where stable sorting is needed, like in databases.

### Insertion Sort
- This method takes one item at a time and puts it in the right spot within a sorted section of the list. It works really well for small lists or ones that are almost sorted already. In those cases, it can be pretty quick (O(n) for best cases). It’s often used in simple tasks, like arranging cards by hand.

### Heap Sort
- Heap Sort turns the list into a structure called a heap, where the biggest or smallest item is easy to find. It then pulls out that item, fixes the heap, and repeats until the list is sorted. This method always takes O(n log n) time. It’s good for things like priority queues or when you need to sort without using extra memory.

### Quick Sort
- Quick Sort picks a “pivot” and splits the list into two parts: items smaller than the pivot and items larger. It then sorts those parts and puts them back together. It’s usually pretty fast (O(n log n) on average), but if the pivot is chosen badly, it can slow down to O(n²). It’s popular for general sorting tasks because it works well in most situations and doesn’t need extra space.

## Discuss the importance of graph algorithms with respect to spanning trees and shortest paths
### Spanning Trees :

### Kruskal’s Algorithm

- Sorts edges by weight Add lowest-weight edges without creating cycles

### Prim’s Algorithm

- Start from single node Grow tree by adding lowest-weight connected edges

### Shortest Path Algorithms: 
- Navigation Optimization

### Dijkstra’s Algorithm Purpose: 
- Find shortest path in weighted graphs

### Applications: 
- GPS navigation and Transportation planning

### Floyd-Warshall Algorithm: 
- Computes all-pairs shortest paths.

#### Real-World Relevance Spanning tree algorithms ensure resource efficiency in building interconnected systems like utility grids. Shortest path algorithms are essential for real-time decision-making in transportation, communication, and supply chain management.

## Discuss about the different studied algorithm design techniques.

### Recursive Algorithms
- These algorithms solve problems by breaking them into smaller versions of the same problem. They rely on a base case to stop the process. Common examples include calculating factorials and navigating through tree structures.

### Brute Force
- Brute Force works by trying every possible solution to find the correct one. While it guarantees a result, it can be very slow and inefficient, especially for large inputs. It is mainly used for small datasets or to double-check the correctness of other algorithms.

### Dynamic Programming
- Dynamic Programming tackles problems by dividing them into smaller parts, solving each once, and saving the results for reuse. This method avoids redundant calculations and is often used in challenges like the Fibonacci sequence or solving the Knapsack Problem.

### Divide and Conquer
- This technique splits a problem into smaller, independent pieces, solves each one, and then combines the results. Well-known examples of this approach include Quick Sort and Merge Sort, which efficiently handle sorting tasks.

