# Buisness Cases Under Veeresh

## 1. Waste Management Service
This initiative aligns with Sustainable Development Goal (SDG) 11, specifically Target 11.6 and Indicator 11.6.1, which focus on reducing the adverse environmental impact of cities, particularly regarding air quality and waste management.

The Waste Management Service aims to streamline waste collection and segregation processes by leveraging data from various areas. By ensuring proper segregation and management of waste, the service minimizes harm to people, animals, and the environment. This promotes a cleaner, healthier urban environment while advancing sustainable waste disposal practices.

## 2. Public transport tracker
- This business case is mapped with SDG 11, Target 11.2, Indicator 11.2.1 . Because here we are trying to give access of public transport details and to track them with their price to more number of people so that public transport usage is increased.
## 3. Air quality monitoring
- Air quality monitoring aligns with Sustainable Development Goal (SDG) 11, particularly with Target 11.6, and indicator 11.6.2 which aims to:

"Reduce the adverse per capita environmental impact of cities, including by paying special attention to air quality and municipal and other waste management."

This target emphasizes the importance of improving urban air quality as part of creating sustainable cities and communities. Air quality monitoring helps track pollution levels, identify sources, and develop strategies to improve urban air conditions, contributing directly to this goal.

# EXPLAINATION FOR THE ABOVE BUSINESS CASES:
# QuickSort

After collecting all the waste, we need to separate it into categories like dry, wet, and others based on material and size. QuickSort is a great choice because it efficiently sorts large amounts of waste (e.g., plastics, metals, organics) with an average time complexity of **O(n log n)**.

## When to Use QuickSort:
1. When the waste quantity is small.
2. When the data is randomly distributed.
3. When extra memory usage isn’t a concern.

## How It Works:
1. Take the first waste item as the **pivot**.
2. From the left, find the first large waste item.
3. From the right, find the first small waste item.
4. Swap them and repeat until everything is sorted.

## Performance:
- **Worst Case**:  
  - Occurs when the data is already sorted (in ascending or descending order).  
  - Time complexity: **O(n²)** (similar to Bubble Sort or Selection Sort).  

- **Best Case**:  
  - Happens when the pivot divides the data evenly.  
  - Time complexity: **O(n log n)**.
- **[CLICK HERE](https://github.com/SuryaKshetra/project.github.io/blob/main/Veeresh/quicksort.cpp)** to navigate to the Quick Sort code

## Alloting spaces for the classifications of the wastes that can be dumped

1) **Objective:** The goal is to allocate specific areas or spaces for different types of waste (such as organic waste, non-biodegradable waste, e-waste, etc.) to ensure that the waste disposal process is organized and efficient.

2) **Input Method:** The user will provide input through an Adjacency Matrix, which is a representation of the available land or space for waste disposal. This matrix will define the relationships between different sections of land and help in determining how the space can be divided.

3) **Process:**

- **User Input:** The user will specify the total available land area where waste disposal can take place. This might include different sections for each waste type, such as organic, recyclable, hazardous, and electronic waste.

- **Allocation of Land:** Based on the total land available, the user will allocate specific areas for each waste classification. For instance, one section might be designated for organic waste, another for recyclable waste, and a separate space for electronic waste. This helps in preventing cross-contamination and ensures proper management of different waste types.

- **MAT Table:** To organize and manage this allocation, a MAT (Matrix Allocation Table) will be used. This table will provide a clear structure, showing the starting and ending locations of each waste type’s designated area. It helps in sorting the data and visually tracking where each waste type is located within the available land.

- **Sorting and Tracking:** The MAT table will also help in sorting the data efficiently by providing details on which sections are allocated for each waste type, as well as their boundaries (starting and ending points). This makes it easy to track how much space each waste classification occupies and adjust the allocation if necessary.

- **Navigation:** If the user needs assistance with the implementation of the MAT table, they can access the specific code or guidance by following a provided link.

**[CLICK HERE](https://github.com/SuryaKshetra/project.github.io/blob/main/Veeresh/MatTable.cpp)** to navigate to the MAT table code


# Dijkstra's Algorithm
## Waste Management in Smart Cities

In smart cities, waste management is streamlined to ensure cleanliness, reduce environmental impact, and optimize resources. Waste is collected from residential areas, commercial zones, industrial sites, and public spaces. Smart bins with sensors notify collection teams when full, enabling timely pick-up, while strategic routes minimize disruptions in commercial zones. Industrial waste, often hazardous, is handled separately, and public spaces are regularly monitored for cleanliness.

Transportation to dump yards or recycling facilities is optimized using advanced algorithms like Dijkstra’s, ensuring efficient routes that save time and fuel. GPS-equipped vehicles enable real-time tracking, ensuring adherence to schedules. Segregation at the source, facilitated by smart bins and citizen involvement, simplifies processing by categorizing waste into organic, recyclable, and hazardous materials.

This approach reduces littering and carbon emissions, promotes recycling, and improves resource efficiency. By leveraging technology and sustainable practices, smart cities create cleaner environments and make waste management more eco-friendly and effective for residents and the planet.

**Why Dijkstra's Algorithm was chosen:**

1. **Shortest Path Needed**:  
   We require the shortest path based on time (weighted edges).

2. **Positive Weights**:  
   All weights (times) are positive. If weights were negative, we would have used the Bellman-Ford algorithm.

3. **Specific Start and End Points**:  
   The journey starts at the **Dump Yard Start** and ends at the **Dump Yard End**.

4. **Specific Location Visit**:  
   We need to visit a specific location (**Residential Area**) twice.

5. **Relatively Small Graph**:  
   The graph consists of 9 locations, making it manageable for Dijkstra's algorithm.

6. **Edge Relaxation Principle**:  
   Dijkstra's algorithm works based on edge relaxation to find the shortest path.

7. **Single Source Shortest Path**:  
   It is a single-source shortest path algorithm.

8. **Greedy Technique**:  
   Dijkstra's falls under the greedy algorithm category, ensuring the shortest path for graphs with non-negative weights.

9. **Efficiency**:  
   The algorithm guarantees the shortest path when all weights are positive, with a time complexity of **O(|E| log |V|)**.
   
**[CLICK HERE](https://github.com/SuryaKshetra/project.github.io/blob/main/Veeresh/dijikstras.cpp)** to navigate to the Dijikstras code

# Heap Sort for Waste Processing System

For waste processing systems, **Heap Sort** is a reliable and consistent sorting algorithm. Unlike QuickSort, which can slow down significantly due to poor pivot choices or partially sorted data, Heap Sort ensures that performance remains stable. Heap Sort has a time complexity of **O(n log n)** in all cases, while QuickSort can degrade to **O(n²)** in the worst case. This makes Heap Sort a more predictable option for systems where timing is crucial. Additionally, Heap Sort is memory efficient, using only **O(1)** extra space, whereas QuickSort requires **O(log n)** space for recursion, which can be a drawback when dealing with large amounts of waste data. For waste processing systems that need consistent and efficient performance, Heap Sort is an ideal choice, ensuring reliable sorting without unexpected delays.

**[CLICK HERE](https://github.com/SuryaKshetra/project.github.io/blob/main/Veeresh/mergesort.cpp)** to navigate to Heap sort code
# Merge Sort:
When we require a stable sorting algorithm, need to work with pre-sorted or partially sorted data, and seek guaranteed time complexity, merge sort is an excellent choice. It consistently provides O(n log n) performance in all scenarios, regardless of the input's initial order. Additionally, merge sort is suitable when extra memory usage is acceptable and reliable processing times are necessary, making it an ideal solution for sorting large datasets with predictable behavior across various conditions.

**[CLICK HERE](https://github.com/SuryaKshetra/project.github.io/blob/main/Veeresh/mergesort.cpp)** to navigate to Merge Sort code
# BFS:
**Breadth-First Search (BFS)** is a powerful algorithm particularly suited for finding the shortest path in an unweighted graph, where all edges have equal weight or cost. It explores the graph in a level-by-level manner, starting from a source node and visiting all neighboring nodes before moving to the next level.

For instance, if you're trying to find the most efficient route for waste collection between two points in a city, BFS ensures that the shortest possible path is identified by systematically exploring all possible routes. This guarantees the optimal use of resources such as time and fuel, making the collection process more efficient.

BFS is especially useful in situations where you need to explore multiple possible paths to determine the best one. By evaluating all paths level by level, it ensures that waste collection vehicles follow the shortest route, reducing unnecessary travel time. The algorithm has a time complexity of O(V + E), where V is the number of vertices (or nodes) and E is the number of edges in the graph, which makes it both efficient and reliable for route planning and optimization.

**[CLICK HERE](https://github.com/SuryaKshetra/project.github.io/blob/e0e038cc859820fa23aab742b22d40b18eb12062/Veeresh/bfs.cpp)** to navigate to BFS CODE.
# Union-Find:
**Union-Find**, also known as Disjoint Set Union (DSU), is a crucial data structure used in waste management systems to efficiently group collection zones, optimize resource allocation, track connections, and handle emergencies. By identifying and managing which waste collection zones are connected, Union-Find enables the system to efficiently group related zones and improve overall operations.

In the context of waste management, Union-Find helps in optimizing various tasks such as routing collection vehicles, managing waste segregation, and responding to service disruptions. The data structure dynamically handles changes in zone connectivity, which is especially useful when managing large cities or regions with frequently changing waste collection needs.

With its ability to efficiently find and union connected zones, Union-Find improves service delivery by ensuring that resources are allocated to the right zones, minimizing inefficiencies. The time complexity of Union-Find is O(E log V), where E represents the number of edges (or connections between zones) and V represents the number of zones, making it a highly efficient solution for optimizing waste management operations.

**[CLICK HERE](https://github.com/SuryaKshetra/project.github.io/blob/b2f52a9734a98d300cff5b61745e2cb96f11a3af/Veeresh/union_find.cpp)** to navigate to Union-Find CODE.

# Kruskals Algorithm:
**Kruskal's Algorithm for Waste Management in a 1500 sq km Smart City**

In a large-scale, 1500 square kilometer smart city, efficient waste management is a critical component of urban infrastructure. Kruskal’s Algorithm, a greedy algorithm primarily used for finding the minimum spanning tree (MST) of a graph, can play a significant role in optimizing waste collection routes and the overall waste management network. 

By representing waste collection points, transportation routes, and waste processing facilities as a graph, where nodes represent locations and edges represent possible paths or connections between these locations, Kruskal’s Algorithm can help minimize the total cost of waste collection and transportation. The objective is to identify the most cost-effective routes for waste collection vehicles, while ensuring that all areas of the city are adequately served.

Kruskal’s Algorithm operates by sorting all edges (routes) by their weight (which could represent factors such as distance, fuel cost, or time) and selecting the smallest edges first to form a minimum spanning tree. The key advantage of using Kruskal’s Algorithm in a smart city is that it allows waste management authorities to determine the optimal network of routes for waste collection, minimizing travel distances, reducing fuel consumption, and ultimately improving service efficiency.

In a 1500 sq km smart city, where waste management requires precise planning and effective resource allocation, Kruskal’s Algorithm can be used to connect all waste collection points in the most efficient manner. The algorithm ensures that all regions of the city are covered while minimizing infrastructure costs and optimizing the deployment of waste collection resources.

The time complexity of Kruskal’s Algorithm is O(E log E), where E represents the number of edges (possible routes). Given the vast scale of a smart city, Kruskal’s Algorithm provides an efficient solution to handle a large number of connections and nodes, making it an excellent choice for waste management optimization.

**[CLICK HERE](https://github.com/SuryaKshetra/project.github.io/blob/c10a794fc9d23e0e0c8a875197f01077c639bd12/Veeresh/mykruskal.cpp)** to navigate to Kruskals code

# Hash Table for Waste Collection Tracking

In waste management, ensuring that no area is missed during waste collection is crucial for maintaining a clean and efficient city. A **Hash Table** provides an excellent solution for tracking the waste collection statuses of various areas, making it an ideal tool for managing the process in real-time.

By using a hash table, each area of the city can be represented as a key, with its corresponding value indicating the status of waste collection (e.g., collected, pending, or missed). The key feature of hash tables is their ability to provide **fast access** to data with an average time complexity of O(1), meaning that regardless of the number of areas, looking up or updating the collection status of any given area is almost instantaneous.

Hash tables also offer **easy updates**: if a waste collection task is completed, the status can be quickly changed. Moreover, hash tables can **dynamically adjust** to the number of areas, accommodating both small and large-scale operations as the city's waste management needs evolve. Unlike other data structures, hash tables do not require sorting, making them an efficient choice for handling real-time updates and lookups.
In the context of waste management in a city, using a hash table enables rapid identification of missed collections and allows for immediate adjustments to collection plans. This makes it a highly effective tool for ensuring that no area is overlooked, contributing to efficient service delivery and optimizing resources like time and manpower.


**[CLICK HERE](https://github.com/SuryaKshetra/project.github.io/blob/f84b1224dd87ace8636b54b4788f9cdff72e2e7c/Veeresh/hashtable.cpp)** to navigate to Hash table code.

# Bubble Sort

In the context of waste management for a 1500 square kilometer smart city, **Bubble Sort** can be utilized as a simple sorting algorithm to help streamline certain operational processes, despite not being the most optimal choice for large-scale applications. Bubble sort works by repeatedly stepping through a list, comparing adjacent elements, and swapping them if they are in the wrong order, which makes it easy to implement.

For waste management, bubble sort could be applied in scenarios where sorting smaller datasets, such as prioritizing waste collection areas based on certain criteria (e.g., size of the area, frequency of waste generation, or proximity to collection points), is needed. For instance, when organizing waste collection routes or managing resources like garbage trucks, bubble sort can help order areas or routes by various factors to streamline operations.

Although bubble sort has a time complexity of O(n²), which makes it inefficient for handling large datasets, it may still be useful in waste management for smaller tasks or when processing a limited number of routes or collection points within a city. For example, sorting a limited list of areas with urgent waste collection needs or ranking zones by priority for service can be handled adequately with bubble sort, especially when the number of items to sort is not large.

In a smart city, while more advanced algorithms like merge sort or quick sort may be used for large-scale optimizations, bubble sort can serve as a basic tool in specific situations where simplicity and ease of implementation are prioritized over performance. It can play a role in smaller sub-tasks that do not require handling extensive data, ensuring efficient waste management at a local level.

**[CLICK HERE](https://github.com/SuryaKshetra/project.github.io/blob/6a37bc9b8e4a37fcf74e1c45b3e9640c393b27eb/Veeresh/bubblesort.cpp)** to navigate to Bubble sort code.

Written By [Veeresh Mattikalli](https://github.com/VeereshMattikalli/)
