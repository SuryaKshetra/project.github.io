# Buisness Cases Under Veeresh

## Waste Management Service
This initiative aligns with Sustainable Development Goal (SDG) 11, specifically Target 11.6 and Indicator 11.6.1, which focus on reducing the adverse environmental impact of cities, particularly regarding air quality and waste management.

The Waste Management Service aims to streamline waste collection and segregation processes by leveraging data from various areas. By ensuring proper segregation and management of waste, the service minimizes harm to people, animals, and the environment. This promotes a cleaner, healthier urban environment while advancing sustainable waste disposal practices.

## 2. Public transport tracker
- This business case is mapped with SDG 11, Target 11.2, Indicator 11.2.1 . Because here we are trying to give access of public transport details and to track them with their price to more number of people so that public transport usage is increased.
## 3. Air quality monitoring
- Air quality monitoring aligns with Sustainable Development Goal (SDG) 11, particularly with Target 11.6, and indicator 11.6.2 which aims to:

"Reduce the adverse per capita environmental impact of cities, including by paying special attention to air quality and municipal and other waste management."

This target emphasizes the importance of improving urban air quality as part of creating sustainable cities and communities. Air quality monitoring helps track pollution levels, identify sources, and develop strategies to improve urban air conditions, contributing directly to this goal.

# EXPLAINATION FOR THE ABOVE BUSINESS CASES:
## Step1: Alloting spaces for the classifications of the wastes that can be dumped

1) **Objective:** The goal is to allocate specific areas or spaces for different types of waste (such as organic waste, non-biodegradable waste, e-waste, etc.) to ensure that the waste disposal process is organized and efficient.

2) **Input Method:** The user will provide input through an Adjacency Matrix, which is a representation of the available land or space for waste disposal. This matrix will define the relationships between different sections of land and help in determining how the space can be divided.

3) **Process:**

- **User Input:** The user will specify the total available land area where waste disposal can take place. This might include different sections for each waste type, such as organic, recyclable, hazardous, and electronic waste.

- **Allocation of Land:** Based on the total land available, the user will allocate specific areas for each waste classification. For instance, one section might be designated for organic waste, another for recyclable waste, and a separate space for electronic waste. This helps in preventing cross-contamination and ensures proper management of different waste types.

- **MAT Table:** To organize and manage this allocation, a MAT (Matrix Allocation Table) will be used. This table will provide a clear structure, showing the starting and ending locations of each waste type’s designated area. It helps in sorting the data and visually tracking where each waste type is located within the available land.

- **Sorting and Tracking:** The MAT table will also help in sorting the data efficiently by providing details on which sections are allocated for each waste type, as well as their boundaries (starting and ending points). This makes it easy to track how much space each waste classification occupies and adjust the allocation if necessary.

- **Navigation:** If the user needs assistance with the implementation of the MAT table, they can access the specific code or guidance by following a provided link.

**[Click Here](https://github.com/SuryaKshetra/project.github.io/blob/main/Veeresh/MatTable.cpp)** to navigate to the MAT table code
<br>
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
- **[Click Here](https://github.com/SuryaKshetra/project.github.io/blob/main/Veeresh/quicksort.cpp)** to navigate to the Quick Sort code
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
   <br>
**[Click Here](https://github.com/SuryaKshetra/project.github.io/blob/main/Veeresh/dijikstras.cpp)** to navigate to the Dijikstras code
<br>
**[Click Here](https://github.com/SuryaKshetra/project.github.io/blob/main/Veeresh/bubblesort.cpp)** to navigate to the Bubble Sort code.  
<br>


**[Click Here](https://github.com/SuryaKshetra/project.github.io/blob/main/Veeresh/mergesort.cpp)** to navigate to merge sort code
<br>
**[Click Here](https://github.com/SuryaKshetra/project.github.io/blob/main/Veeresh/mykruskal.cpp)** to navigate Kruskals code


Written By [Veeresh Mattikalli](https://github.com/VeereshMattikalli/)
