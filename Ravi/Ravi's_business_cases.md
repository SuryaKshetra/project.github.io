# Business cases integrated with SDG 11 

## Case 1:-
### Integration of small-sized apartments with smart features like solar equipped-
These small-sized apartments can be built in unused spaces like small-untraversable gulleys, under train bridges, etc which ensures efficient use of space in a city
also providing adequate living space for everyone at cheap costs since the houses are built on a very small area of land.

This case caters to 11.1 of SDG 11 3.

Algorithms like segment trees can be used to calculate unused areas on a land where each node acts as a region of land.

These areas can then be used to build these tiny apartments.
These apartments usually accomodate atmost 1-2 persons at a time for everyday living. Some of these can be seen in japan which has very little usable land compared 
to a country like india. The houses can be essentially built by the government in sets for use or the land can be sold for the use of building.

## Case 2:-
### Using piezoelectric plates/footholds to produce electricity-
Using this technology smart roads and highways can be built which acts as an alternate efficient source of electricity from all the unused kinetic energy from the
vehicles and people walking on platforms.

This alternate source of electricity can be sold to different businesses and accomation of these plates can act as a source of revenue by providing smart energy
solution to large facilities like malls,etc.
It can also help reduce cost of electricity and promote eco friendly systems.

data structure Algorithms like graphs can be used to track spaces/areas with most of these high kinetic regions and used to build plates on those areas.

## Case 3:-
### Smart Governance and Civic Engagement-
Smart governance involves the use of digital platforms to enhance citizen engagement, improve service delivery, and foster transparency in urban management.
These technologies enable cities to be more responsive and accountable to their citizens.

Algorithms like advanced blockchain systems can be used to make the platform more secure and safe to use since it encompasses the whole popukation and power of a country.

---
# Explanation for each case implemented with data structures and Algorithms

## Integration of small-sized apartments with smart features like solar equipped-
The idea is to build small-sized apartments equipped with smart features such as solar panels on previously unused or difficult-to-utilize land spaces. These spaces could include small gulleys, areas under train bridges, or narrow urban gaps. This approach offers several benefits:

- **Efficient Use of Urban Space**: By utilizing underused land, such as narrow passages or gaps between buildings, we can make more room for living spaces in crowded cities.
- **Affordable Housing**: Since these apartments occupy small areas, they can be built at a much lower cost compared to traditional housing. This makes them an attractive solution for providing affordable housing in cities with limited land.
- **Sustainability**: Incorporating smart features such as solar panels allows these buildings to be eco-friendly and sustainable.

A **Segment Tree** is an ideal data structure for managing range queries and updates, especially when working with intervals or regions of land. For this case, each node in the tree could represent a region of land, and the tree would allow us to efficiently calculate the available land in a given range.

- **Range Queries**: You can use the segment tree to query for available space in a specific region of land (e.g., find all gaps of unused land between certain coordinates).
- **Dynamic Updates**: When land is used for constructing apartments, the segment tree can be updated to reflect the change in land status.
- **Efficiency**: Segment trees provide `O(log n)` time complexity for both querying and updating, making them very efficient for applications with dynamic data, such as this one.
Code for segment tree can be seen here [Segment tree code](https://github.com/SuryaKshetra/project.github.io/blob/main/Ravi/segment_tree.cpp)

**Binary Indexed Tree (BIT) / Fenwick Tree**
#### Explanation:
A **Binary Indexed Tree (BIT)** is another efficient data structure that supports range queries and updates, though it is typically used for simpler tasks. It might not offer as much flexibility as a segment tree for dynamic range updates, but it is a viable option for smaller or simpler land tracking applications.

- **Range Sum Queries**: BIT excels in scenarios where cumulative sum queries are needed, such as finding the total unused land in a specific range.
- **Efficient Updates**: BIT provides efficient updates to land status, although it might not be as effective as a segment tree when working with more complex data or larger datasets.
- Sample code can be found here [Fenwick tree code](https://github.com/SuryaKshetra/project.github.io/blob/main/Ravi/fenwick_tree.cpp)

**Sorting**
Before using more advanced data structures like segment trees, sorting the land intervals can help organize the data and make it easier to perform further operations like merging intervals or searching for available land.
Once the intervals are sorted, you can use binary search or linear scans to quickly identify gaps of available land or where new apartments can be built.
Some simple sorting algorithm can be used from [Sorting reference code](https://github.com/SuryaKshetra/project.github.io/blob/main/Ravi/sorting.cpp)

A **Greedy Algorithm** is ideal when you need to select the maximum number of non-overlapping intervals. After sorting the intervals, a greedy approach can help select the largest possible number of available land regions for construction.

---
## Using piezoelectric plates/footholds to produce electricity-
In the era of sustainable energy, utilizing existing infrastructure like roads and highways for energy generation is an innovative approach. **Piezoelectric plates**, which generate electricity when subjected to mechanical stress (such as pressure from vehicles or foot traffic), can be embedded in roads, highways, and pedestrian pathways. The primary objective of this technology is to harness kinetic energy from vehicles and pedestrians and convert it into usable electricity.

### Benefits of Piezoelectric Roads:
- **Alternative Energy Source**: The kinetic energy generated by the movement of vehicles and people can be captured and converted into electricity.
- **Revenue Generation**: The electricity produced can be sold to businesses, helping reduce electricity costs. Facilities like malls, airports, and large buildings can benefit from this energy source.
- **Eco-Friendly**: By reducing reliance on conventional energy sources, this technology helps lower carbon footprints and promotes sustainable, eco-friendly systems.
- **Cost Reduction**: Reduced dependency on the grid, leading to lower electricity costs for urban facilities.

This system can also act as a **smart energy solution** for cities by providing an efficient and clean energy source.

### Data Structures and Algorithms for Smart Roads and Piezoelectric Plates-

### Dijkstra’s Algorithm

**Dijkstra's Algorithm** is a graph algorithm used to find the shortest path between nodes in a graph. It can be applied here to optimize the routing of energy from the **piezoelectric plates** to the energy storage or grid system.

#### Use Case:
- **Energy Transmission Optimization**: Once piezoelectric plates are installed in high-kinetic zones, we need to route the generated electricity efficiently to the storage system or businesses. Dijkstra's algorithm can be used to compute the **shortest path** between energy collection points and storage locations, minimizing the energy loss due to long transmission paths.
Time Complexity: O((V + E) log V), where V is the number of vertices and E is the number of edges.
Code for it can found here [djikstra code](https://github.com/SuryaKshetra/project.github.io/blob/main/Veeresh/dijikstras.cpp)

### QuickSort or MergeSort
Sorting algorithms can help in organizing road segments or regions based on traffic patterns or kinetic energy potential. Sorting these regions by traffic intensity (or by kinetic energy produced) ensures that piezoelectric plates are installed in areas that maximize energy production.

#### Use Case:
- Suppose you have a set of road segments, each with different levels of foot traffic or vehicle movement. Sorting these segments by energy generation potential allows you to install piezoelectric plates in the highest-traffic areas first.
Code for merge sort can be found here [merge sort code](https://github.com/SuryaKshetra/project.github.io/blob/main/Ravi/merge_sort.cpp)

### Dynamic Programming for Cost Optimization
Given multiple regions with varying traffic volumes, Dynamic Programming can be used to determine the optimal placement of piezoelectric plates. It helps ensure that the energy produced is maximized while keeping installation costs as low as possible.
 Given a set of regions with their energy potential and cost, the DP solution would calculate the best configuration of piezoelectric plates to maximize energy output and minimize cost.

 ### Segment Tree for Range Queries
A Segment Tree is a tree data structure used to store information about intervals or segments. It supports efficient queries and updates on ranges of data, making it ideal for scenarios where energy generation from piezoelectric plates needs to be tracked across multiple road segments.
As each piezoelectric plate generates energy depending on traffic intensity in the segment, a Segment Tree can be used to store and query the total energy produced in any given segment of the road.
Segment trees allow for both range queries (e.g., total energy produced in a range of road segments) and point updates (e.g., updating energy data when traffic volume changes).
**Efficiency**: The segment tree supports logarithmic time complexity for both queries and updates, making it very efficient for large datasets.
Code for segment tree can be seen here [Segment tree code](https://github.com/SuryaKshetra/project.github.io/blob/main/Ravi/segment_tree.cpp)

---
## Smart Governance and Civic Engagement-
 **Smart Governance** involves leveraging digital platforms and technologies to improve governance, citizen engagement, and service delivery in urban management. It uses various tools, such as smart cities initiatives, blockchain, IoT (Internet of Things), and AI (Artificial Intelligence) to create more responsive, transparent, and accountable systems. By utilizing digital platforms, governments can interact with their citizens more efficiently, improve public services, and enable active participation in decision-making processes.

### Key Aspects of Smart Governance:
- **Digital Platforms for Civic Engagement:** Citizens can interact with local authorities, report issues, provide feedback, and participate in decision-making via mobile apps or websites.
- **Improved Service Delivery:** Services like waste management, healthcare, and public transportation can be optimized with the help of real-time data and AI-powered solutions.
- **Transparency and Accountability:** Smart governance platforms ensure that governance is transparent by sharing data with the public and allowing easy access to government actions and decision-making.
- **Security and Safety:** With the increasing amount of sensitive data involved, advanced technologies like **blockchain** can provide secure and transparent systems.

## Data Structures and Algorithms for Smart Governance
**Blockchain (Distributed Ledger)**
   - **Data Structure:** Blockchain is a decentralized data structure that stores records in blocks linked in a chain. It uses a distributed ledger to maintain transparency and traceability of transactions.
   - **Algorithm:** 
     - **Merkle Trees** for efficient validation and verification of transactions.
   - **Use Case:** Blockchain ensures the integrity of voting systems, public records, and citizen data. It prevents tampering and provides a transparent history of events.

**Dijkstra's Algorithm** for shortest path problems like finding the quickest route for services like waste collection or emergency services.
   - **Use Case:** Graph algorithms can help in optimizing public transportation, city service requests, and understanding the dynamics of citizen engagement.

 **Trie (Prefix Tree)**
   - **Data Structure:** A trie is a tree-like data structure that stores strings in a way that allows fast retrieval.
   - **Algorithm:** 
     - **Prefix Search** for efficient querying of service requests or feedback.
     - **Autocomplete Functionality** for search engines within civic engagement apps.
   - **Use Case:** Tries are useful for efficiently searching through large datasets like service requests, FAQs, or feedback systems. It can help citizens find relevant information quickly.
Code for trie can referenced from here [Trie](https://github.com/SuryaKshetra/project.github.io/blob/main/Ravi/Trie.cpp)

**Priority Queues (for Task Scheduling and Issue Resolution)**
   - **Data Structure:** Priority Queue is a data structure where elements are ordered based on their priority, not just their insertion order.
   - **Algorithm:** 
     - **Heaps** Binary Heap for efficient insertion and extraction of the highest priority elements.
   - **Use Case:** This can be used to manage high-priority tasks or complaints in a smart governance platform. For instance, urgent public safety issues can be processed faster than less critical ones.

 **Hash Maps (for Quick Lookup and Data Integrity)**
   - **Data Structure:** A hash map stores key-value pairs, providing efficient access to data.
   - **Algorithm:** 
     - **Hashing Function** to ensure uniform distribution and minimize collisions.
   - **Use Case:** Hash maps are ideal for storing and retrieving user data, citizen requests, or even verifying the integrity of records (e.g., matching ID numbers with public profiles securely).
















