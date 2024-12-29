#I have used SDG's from [here](https://unhabitat.org/sites/default/files/2018/07/SDG-11-Targets-and-Indicators.pdf).


# Here are the Business Cases

## **Tourism Management**
**Use Case:** Optimize tourism routes within a popular district.  
- **Elaboration:** A tourist district has several attractions such as museums, parks, and shopping areas. To enhance the visitor experience, the city must provide a route map that minimizes travel time between attractions. By applying [Dijkstra's algorithm](Codes/Dijkstra.cpp), the shortest path between any two attractions can be calculated based on real-time traffic or distance data.  
- **Data Input:** A graph representing locations as nodes and roads as edges, with weights representing travel time or distance.  
- **SDG Link:** **SDG 11.2**  
  **Indicator:** 11.2.1 - Proportion of population that has convenient access to public transport, by sex, age, and persons with disabilities.  

---

## **Service Management**
**Use Case:** Maintain various services like water, waste, transport, and power.  
- **Elaboration:** The city manages numerous interconnected services. A hierarchical [Tree](Codes/tree.cpp) structure is used to represent these services, with the root node being the city’s central management system. Branches represent specific services such as water supply, waste disposal, and transport. This enables easy addition, removal, or traversal of services for maintenance.  
- **Data Input:** A tree data structure where each service is a node.  
- **SDG Link:** **SDG 11.6**  
  **Indicator:** 11.6.1 - Proportion of urban solid waste regularly collected and with adequate final discharge out of total urban solid waste generated.  

---

## **Population Analysis**
**Use Case:** Analyze and sort population data for urban planning.  
- **Elaboration:** Urban planners use population data from various districts to allocate resources like schools, hospitals, and public transport. The [Quick Sort](Codes/Quick_Sort.cpp) algorithm efficiently sorts this data to identify highly populated areas that require immediate attention.  
- **Data Input:** Population data of districts in an array.  
- **SDG Link:** **SDG 11.3**  
  **Indicator:** 11.3.1 - Ratio of land consumption rate to population growth rate.  

---

## **Emergency Services Search**
**Use Case:** Locate emergency services like hospitals, fire stations, or police stations.  
- **Elaboration:** During emergencies, citizens need to quickly locate the nearest service center. Emergency facilities are indexed based on a unique identifier (like coordinates or IDs). Using [Binary Search](Codes/Binary_Search.cpp), a citizen can query the list of emergency centers and find the nearest facility in logarithmic time.  
- **Data Input:** Sorted list of service centers with unique IDs.  
- **SDG Link:** **SDG 11.7**  
  **Indicator:** 11.7.1 - Average share of the built-up area of cities that is open space for public use for all.  

---

## **Traffic Management**
**Use Case:** Optimize traffic flow using congestion prediction.  
- **Elaboration:** The city needs to reduce traffic congestion across major junctions. Using the [Floyd-Warshall](Codes/Floyd-Warshall.cpp) algorithm, the shortest path between all pairs of junctions is computed to optimize traffic light scheduling and suggest alternative routes to drivers.  
- **Data Input:** A graph with junctions as nodes and roads as edges, weighted by average travel time or congestion level.  
- **SDG Link:** **SDG 11.2**  
  **Indicator:** 11.2.1 - Proportion of population that has convenient access to public transport.  

---

## **Public Transport**
**Use Case:** Analyze bus/train schedules and reduce waiting times.  
- **Elaboration:** To improve the efficiency of public transport, the city needs to analyze routes and schedules. Using [Breadth-First Search](Codes/bfs.cpp) (BFS), all reachable stops or stations from a given starting point can be identified, helping plan more direct routes or reduce waiting times for passengers.  
- **Data Input:** A graph with stops as nodes and routes as edges.  
- **SDG Link:** **SDG 11.2**  
  **Indicator:** 11.2.1 - Proportion of population that has convenient access to public transport.  

---

## **Urban Green Spaces**
**Use Case:** Optimize placement of parks.  
- **Elaboration:** To ensure residents have easy access to green spaces, the city evaluates all potential locations for parks. Using [Prim's algorithm](Codes/Prim.cpp), the city can connect existing green spaces with new ones at minimal cost, creating a network of accessible parks.  
- **Data Input:** A graph with locations as nodes and distances as edges.  
- **SDG Link:** **SDG 11.7**  
  **Indicator:** 11.7.1 - Average share of the built-up area of cities that is open space for public use for all.  

---

## **Energy Distribution**
**Use Case:** Optimize energy grid connections to minimize loss.  
- **Elaboration:** The city must efficiently distribute electricity to reduce energy loss and improve sustainability. Using [Kruskal’s algorithm](Codes/Kruskal.cpp), the minimum spanning tree of the city’s energy grid can be identified, ensuring all areas are connected with minimal cable length and transmission loss.  
- **Data Input:** A graph with substations as nodes and connection costs as edges.  
- **SDG Link:** **SDG 11.6**  
  **Indicator:** 11.6.2 - Annual mean levels of fine particulate matter in cities.  

---

## **Emergency Routing**
**Use Case:** Prioritize emergency routes during natural disasters.  
- **Elaboration:** Emergency routes are ranked based on factors like distance, traffic, and accessibility. A [Binary Tree](Codes/BinaryTree.cpp) stores these routes, and traversal helps in quickly identifying the highest-priority route.  
- **Data Input:** Routes stored as nodes in a Binary Tree, with priorities as keys.  
- **SDG Link:** **SDG 11.5**  
  **Indicator:** 11.5.1 - Number of deaths, missing persons, and directly affected persons attributed to disasters.  

---

## **Urban Road Repairs**
**Use Case:** Prioritize road repairs based on usage and condition.  
- **Algorithm:** Heap Sort.  
- **Elaboration:** Roads are prioritized based on their traffic levels and condition ratings. Using [heap sort](Codes/HeapSort.cpp), the roads are arranged in descending order of urgency for repairs, ensuring resources are allocated effectively.  
- **Data Input:** An array of roads with traffic levels and condition ratings.  
- **SDG Link:** **SDG 11.2**  
  **Indicator:** 11.2.1 - Proportion of population that has convenient access to public transport.  

---

## **City Park Utilization**
**Use Case:** Manage park visitor data for optimal resource allocation.  
- **Elaboration:** Each park maintains visitor entry and exit logs. Using an [AVL Tree](Codes/AVL_Tree.cpp), the city can dynamically update and balance the number of visitors in real time, ensuring no park exceeds its capacity.  
- **Data Input:** Visitor logs stored as nodes in an AVL Tree, keyed by timestamps.  
- **SDG Link:** **SDG 11.7**  
  **Indicator:** 11.7.1 - Average share of the built-up area of cities that is open space for public use for all.  

---

## **Street Maintenance Scheduling**
**Use Case:** Sort streets by maintenance priority based on their condition and traffic.  
- **Elaboration:** Streets are prioritized for maintenance based on their wear-and-tear and traffic levels. Using [Bubble Sort](Codes/BubbleSort.cpp), the list of streets is arranged in ascending order of urgency, helping allocate resources systematically.  
- **Data Input:** Array of streets with condition ratings.  
- **SDG Link:** **SDG 11.2**  
  **Indicator:** 11.2.1 - Proportion of population that has convenient access to public transport.  

---

## **Public Transport Scheduling**
**Use Case:** Detect and fix duplicate entries in public transport schedules.  
- **Elaboration:** With complex schedules for buses or trains, duplicate entries can lead to inefficiencies. Using the [Rabin-Karp](Codes/Rabin-Karp.cpp) Algorithm, the system searches for patterns of duplicate times or routes in the schedule and flags them for correction.  
- **Data Input:** Schedule data stored as strings.  
- **SDG Link:** **SDG 11.2**  
  **Indicator:** 11.2.1 - Proportion of population that has convenient access to public transport.  

---

## **Utility Fault Detection**
**Use Case:** Manage and detect faults in power or water supply systems.  
- **Elaboration:** Supply lines are monitored in real-time, and fault reports are logged in a [2-3 Tree](Codes/2-3Tree.cpp) for efficient updates and retrieval. The balanced structure ensures quick detection and correction of faults.  
- **Data Input:** Fault reports with timestamps and locations as keys in the 2-3 Tree.  
- **SDG Link:** **SDG 11.6**  
  **Indicator:** 11.6.1 - Proportion of urban solid waste regularly collected and with adequate final discharge.  

---

## **Incident Reporting System**
**Use Case:** Flag inappropriate content in citizen-submitted incident reports.   
- **Elaboration:** Reports submitted by citizens are scanned for keywords that indicate emergencies or inappropriate content. Using [Brute Force String Search](Codes/bfss.cpp), the system highlights these keywords for review.  
- **Data Input:** Textual reports.  
- **SDG Link:** **SDG 11.5**  
  **Indicator:** 11.5.1 - Number of deaths, missing persons, and directly affected persons attributed to disasters.  

---

## **Public Transportation Expansion**
**Use Case:** Identify accessibility gaps in public transport networks.  
- **Elaboration:** The public transport network is modeled as a graph. [Warshall’s Algorithm](Codes/Warshall.cpp) determines transitive closures to identify areas with poor connectivity, aiding in network expansion planning.  
- **Data Input:** Graph of bus/train routes.  
- **SDG Link:** **SDG 11.2**  
  **Indicator:** 11.2.1 - Proportion of population that has convenient access to public transport.

