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
**Hierarchical Data**

Hierarchical data is a type of data structure where elements are organized in a parent-child relationship, forming a tree-like structure. This structure is commonly used to represent hierarchical information, such as file systems, organizational structures, and taxonomic classifications.

**Tree Data Structures**

Tree data structures are used to represent hierarchical data. Different types of trees offer varying levels of efficiency and complexity, depending on the specific use case.

### Common Tree Data Structures

**1. Binary Tree**
  * **Definition:** Each node has at most two children: a left child and a right child.
  * **Use Cases:** Representing hierarchical data, expression trees.
  * **Challenge:** Can become unbalanced, leading to inefficient operations.

**2. Binary Search Tree (BST)**
  * **Definition:** A binary tree with the property that the left subtree contains nodes with keys less than the root node's key, and the right subtree contains nodes with keys greater than the root node's key.
  * **Use Cases:** Efficient searching, insertion, and deletion.
  * **Challenge:** Can become unbalanced, leading to worst-case linear time complexity.

**3. AVL Tree**
  * **Definition:** A self-balancing binary search tree where the heights of the two child subtrees of any node differ by at most one.
  * **Solution:** Maintains balance through rotations.
  * **Challenge:** More complex implementation than a simple BST.

**4. 2-3 Tree**
  * **Definition:** A self-balancing tree where each node can have either one or two keys and two or three children.
  * **Solution:** Maintains balance through splitting and merging nodes.
  * **Challenge:** More complex structure than a BST or AVL tree.

**5. Red-Black Tree**
  * **Definition:** A self-balancing binary search tree where each node is colored either red or black.
  * **Solution:** Maintains balance through specific color properties.
  * **Challenge:** More complex implementation than a BST or AVL tree.

**6. Heap**
  * **Definition:** A complete binary tree where each node is greater than or equal to (max heap) or less than or equal to (min heap) its children.
  * **Use Cases:** Priority queues.
  * **Challenge:** Not suitable for searching or traversing elements in a specific order.

**7. Trie**
  * **Definition:** A tree-like data structure used to store a set of strings.
  * **Use Cases:** Efficient string searching and prefix matching.
  * **Challenge:** Can consume significant space for large sets of strings.

### Choosing the Right Tree Data Structure

The choice of tree data structure depends on the specific requirements of the application:

* **Frequent insertions and deletions:** AVL trees and red-black trees are good choices.
* **Efficient searching:** BSTs, AVL trees, and red-black trees are suitable.
* **Storing and retrieving strings:** Tries are ideal.
* **Priority queues:** Heaps are well-suited.


## The need of array query algorithms and their implications. Their applications and principles need to be discussed 
-

## Differentiate between tree and graphs and their traversals. The applications of each
-

## Deliberate on sorting and searching algorithms, the technique behind each and they connect to real world
-

## Discuss the importance of graph algorithms with respect to spanning trees and shortest paths
-

## Discuss about the different studied algorithm design techniques.
-
