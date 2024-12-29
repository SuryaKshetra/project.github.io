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
 
## 1. Green Spaces

Green spaces are essential for urban environments, offering recreational opportunities, ecological benefits, aesthetic value, and positive health impacts. We are allocating 7% of the total 1500 sq.km area (100 sq.km) for green and recreational spaces.   

Sub-task 1: Accessibility of Green Spaces

Ensuring residents have easy access to green spaces requires analyzing their proximity.

We represent the city's road network as a graph, with intersections as vertices and roads as edges. Dijkstra's Algorithm calculates the shortest walking paths from each residential area (source vertex) to the nearest green space (destination vertex).It efficiently finds the shortest paths in weighted graphs, using walking distance as the weight.   

Data Structures:

Graph: Adjacency Matrix (efficient for spatial representation of roads)
Min-Heap: Stores vertices with calculated distances, allowing efficient selection of the vertex with the minimum distance.  

Algorithms:

Dijkstra's Algorithm: Finds the shortest path from a single source vertex to all other vertices in the graph.
Efficiency: O(|E|log|V|)

Code for [Dijikstra's](https://github.com/Aravshah24/DSA_codes/blob/fd4fb1fee94ea032f7ff48380b07d4fe65c0b567/DSA_codes/Dijikstra's.cpp)

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

Code for Prims's:


## 2.EV Charging Infrastructure

Efficient EV charging infrastructure is crucial for electric vehicle adoption.

Sub-task 1: Shortest Routes for EV Users

Guiding drivers to the nearest available charging station requires real-time calculation of shortest paths.

We use Dijkstra's Algorithm with a Min-Heap to calculate shortest paths in real-time.

Data Structures:

Graph: Adjacency Matrix (efficient for spatial representation of roads)
Min-Heap: Stores vertices and their distances, allowing selection of the closest charging station.
Algorithms:

Dijkstra's Algorithm: Finds the shortest path from a current location to the nearest charging station.
Code

Sub-task 2: Efficient Lookup of Charging Station Locations

Efficiently finding charging stations based on name or partial name is key for user convenience.

We can use a Trie data structure for efficient prefix-based searching. Each node represents a character in the station name, and paths in the Trie represent prefixes of stored names. This allows for faster lookups by traversing the Trie based on the search prefix.

Data Structures:

Trie: Enables efficient prefix-based search for charging station names.

Code:

Sub-task 3: Predictive Maintenance of Charging Stations

Proactive maintenance minimizes downtime and ensures charging station reliability.

We can use a Hash Table to store historical usage and failure data for each charging station. This allows for efficient data retrieval for predictive maintenance analysis.

Data Structures:

Hash Table: Stores charging station data (usage, failures, etc.) for efficient access.
Algorithms:

Hashing: For efficient insertion and retrieval of charging station data.

Code:


## 3. Tourism

Promoting tourism requires efficient route planning and resource allocation to enhance the tourist experience.

Sub-task 1: Shortest and Best Path for Tourists

Tourists need efficient routes between attractions, considering factors like cost (toll charges, fuel prices).

We use the Bellman-Ford Algorithm to compute the shortest paths from a tourist's starting location to all other attractions. Bellman-Ford is suitable because it handles graphs with negative edge weights (which could represent discounts or refunds), unlike Dijkstra's.

Data Structures:
Graph: Adjacency Matrix (to represent connections between attractions and associated costs).
Algorithms:

Bellman-Ford Algorithm: Computes shortest paths in a weighted graph, even with negative edge weights.

Code:


Sub-task 2: Tourist Information Search and Retrieval

Tourists need quick access to information about attractions.

We use a Trie data structure for efficient prefix-based searching of attraction names or keywords. This allows tourists to quickly find information by typing part of an attraction's name. We also use String Matching Algorithms (Rabin-Karp, Boyer-Moore) to search for specific phrases within attraction descriptions.

Data Structures:

Trie: Enables efficient prefix-based search for attraction names.

Algorithms:

Rabin-Karp Algorithm: Efficient string searching using hashing.
Boyer-Moore Algorithm: Another efficient string searching algorithm that uses pre-processing to skip unnecessary comparisons.

Code:


Sub-task 3: Crowd Management at Tourist Attractions

Managing crowds efficiently improves the tourist experience and safety.

We use Queues to simulate waiting lines at attractions and manage entry procedures. We also use Sorting Algorithms (e.g., Quick Sort, Merge Sort) to prioritize entry based on factors like ticket type or arrival time.

Data Structures:

Queue: Manages waiting lines in a first-in, first-out (FIFO) order.

Algorithms:

Sorting Algorithms (Quick Sort, Merge Sort): Arranges tourists in order based on priority.

Code:

