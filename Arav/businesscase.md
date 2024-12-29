# Business Cases Identified

## 1. Green Spaces

**Business Case:**  
Urban greenery improves air quality, reduces urban heat islands, and enhances the well-being of residents. Integrating green spaces in city planning fosters environmental sustainability and promotes public health, increasing property value and attracting businesses.

**Alignment with SDG 11 Targets:**
- **11.7**: By 2030, provide universal access to safe, inclusive and accessible, green and public spaces, in particular for women and children, older persons and persons with disabilities  
- **11.7.1**: Average share of the built-up area of cities that is open space for public use for all, by sex, age and persons with disabilities  
- **11.6**: By 2030, reduce the adverse per capita environmental impact of cities, including by paying special attention to air quality and municipal and other waste management

---

## 2. EV Charging Infrastructure

**Business Case:**  
A robust EV infrastructure reduces dependency on fossil fuels, supports clean energy adoption, and enhances public transport efficiency, attracting investments in EV manufacturing and operations.

**Alignment with SDG 11 Targets:**
- **11.2**: By 2030, provide access to safe, affordable, accessible and sustainable transport systems for all.  
- **11.6**: Reduce the environmental impact of cities by promoting clean energy

**Relevant Algorithms:**
- **Dijkstra’s Algorithm**: Compute the shortest paths between residential/commercial zones and potential EV charging stations.  
  - Prioritize locations within specific travel-time thresholds.

---

## 3. Tourism

**Business Case:**  
Promoting tourism boosts local economies, generates employment, and enhances cultural preservation. Sustainable tourism reduces environmental strain while maximizing socio-economic benefits.

**Alignment with SDG 11 Targets:**
- **11.4**: Strengthen efforts to protect and safeguard cultural and natural heritage.  
- **11.a**: Support positive economic, social and environmental links between urban, peri-urban and rural areas by strengthening national and regional development planning.

**Relevant Algorithms:**
- **Shortest Path Algorithms (Dijkstra’s, Bellman-Ford)**: Identify the most efficient routes connecting tourist hotspots.


# Explaination of the Business Cases Identified: 

## 1. GREEN SPACES
  Green spaces are open-space areas reserved for parks and other green spaces, including plant life,and other kinds of natural environment. The benefits that urban open space provides to citizens can be broken into four basic forms: recreation, ecology, aesthetic value, and positive health impacts.
  
Sub-task 1: Accessibility of Green Spaces
Considering the importance of green spaces we provide 7% of land for green spaces distributed over the 1500sq.km as that is 100 sq.km of green and recreational space.
To ensure resonable access to green spaces, we need to analyze how easy the residents can reach them.  As we have provided close to 800 sq.km of residential land, we need to ensure that they have easy access to the green spaces.
We represent the city's road network as a graph. We use Dijkstra's Algorithm to calculate the shortest walking paths from each residential area to nearest green space.
We calculate the shortest walking paths from each residential area (source vertex) to the nearest green space (destination vertex). It efficiently finds the shortest path in weighted graphs with walking distance being the weights.


Data Structures:
Graph: We use an adjancency matrix for road network.
Min-Heap:We implement min-heap to find the lowest weight from the distance array. It gives the vertex with minimum distance.

Algorithms:
Dijikstra's Algorithm: finding the shortest path from a single source vertex to all other vertices in weighted graph.
Efficiency:

Sub-task 2: To group green spaces by proximity or type (e.g., parks, gardens, recreational zones). Allows for efficient management of connected components in the city layout.

We can use union-find to group the green spaces that are connected directly or indirectly. This helps in planning infrastructure like walking paths, cycling routes between green spaces.

Sub-task 3: Green Space Connectivity Analysis:

To assess the overall connectivity of green spaces, we represent them as nodes in a graph, with edges representing potential connections like a green corridor or path. We use Prim's Algorithm to find the Minimum Spanning Tree (MST). The MST represents the most efficient way to connect all green spaces with the minimum total cost (e.g., shortest path lengths, construction costs).

Algorithms:
Prims Algorithm: Prim’s algorithm works by expanding the tree one edge at a time, always choosing the edge with the smallest weight that doesn't form a cycle. In this context, it helps in choosing the shortest or cheapest paths between green spaces.


## 2.EV Charging Infrastructure:

Sub-task 1: To determine the shortest routes for EV users to reach charging stations.
To guide drivers to the nearest available charging station, we use Dijkstra's Algorithm with a Min-Heap to calculate shortest paths in real-time.

Data Structure:
Graphs: we use adjacency matrix 
Min-Heap:

Sub-task 2: For efficient lookup of charging station locations by prefix-based search.

A Trie allows for efficient searching of strings. Each node represents a character in a string, and paths in the tree represent the prefixes of the strings stored.
When looking up a charging station by its name or part of its name (prefix), you only need to traverse the tree following the characters of the prefix, which is much faster than scanning the entire list of station names.

Code for string search:

Sub-task 3:  Used for predictive maintenance of charging stations by storing historical usage and failure data.

Data structure: Hash Table
Hash tables provide constant time complexity for storing and retrieving data of charging station usage which helps in maintainance based on usage.
Algorithms: Hashing
Insertion:To store charging station data like number of users, failure occured.
Retrieval: Get the data for a specific station to check for maintainance.

Code for Hashing:

## 3. Tourism
Promoting tourism boosts local economies and preserves cultural heritage. Efficient route planning and resource allocation are crucial for enhancing tourist experience.

Sub-task 1: Shortest and best path
To calculate shortest paths for tourists, considering costs like toll charges, fuel prices etc.

Data Structure: 

Algorithms: Bellman-Ford Algorithm 
Bellman-Ford Algorithm is used to compute the shortest path from a source node (such as the starting location of a tourist) to all other nodes (tourist attractions) in a graph. The graph’s edges weights will be toll charges or fuel prices which makes Bellman-Ford particularly useful for such situations.

Code for Bellman-Ford : 

Sub-task 2:Tourist Information Search and Retrieval
To provide tourists with easy access to information about attractions, we can use a Trie data structure to efficiently search for attractions by name or keyword. We can also use String Matching Algorithms (e.g., Rabin-Karp, Boyer-Moore) to search for specific phrases in attraction descriptions.
Data Structure: Trie

Algorithms: Rabin-karp, Boyer-Moore

Code for string search :

Sub-task 3: Crowd Management at Tourist Attractions
To manage crowds at popular tourist attractions, we can use Queues to simulate waiting lines and optimize entry procedures. We can also use Sorting Algorithms to prioritize entry based on factors like ticket type or arrival time.
Data Structure:Queue
Algorithm: Sorting algorithms

Code for sorting:




1. Green Spaces

Green spaces are essential for urban environments, offering recreational opportunities, ecological benefits, aesthetic value, and positive health impacts. We are allocating 7% of the total 1500 sq.km area (100 sq.km) for green and recreational spaces.   

Sub-task 1: Accessibility of Green Spaces

Ensuring residents have easy access to green spaces requires analyzing their proximity.

We represent the city's road network as a graph, with intersections as vertices and roads as edges. Dijkstra's Algorithm calculates the shortest walking paths from each residential area (source vertex) to the nearest green space (destination vertex).It efficiently finds the shortest paths in weighted graphs, using walking distance as the weight.   

Data Structures:

Graph: Adjacency Matrix (efficient for spatial representation of roads)
Min-Heap: Stores vertices with calculated distances, allowing efficient selection of the vertex with the minimum distance.  

Algorithms:

Dijkstra's Algorithm: Finds the shortest path from a single source vertex to all other vertices in the graph.

Code for Dijikstra's :

Sub-task 2: Grouping Green Spaces

Grouping green spaces by proximity or type (parks, gardens, recreational zones) allows for efficient management and infrastructure planning (walking paths, cycling routes).

We can use a Union-Find data structure to group green spaces that are directly or indirectly connected. This facilitates planning infrastructure between connected green spaces.

Algorithms:

Union-Find: Efficiently determines if two elements belong to the same connected component.

Code :


Sub-task 3: Green Space Connectivity Analysis

To provide overall connectivity of green spaces helps plan connections like green corridors or paths.   

We represent green spaces as nodes in a graph, and connections (paths) as edges. Prim's Algorithm finds the Minimum Spanning Tree (MST), representing the most efficient way to connect all green spaces with the minimum total cost (shortest paths, construction costs).   

Data Structure:

Algorithms:

Prim's Algorithm: Constructs a minimum spanning tree for a weighted undirected graph.   


