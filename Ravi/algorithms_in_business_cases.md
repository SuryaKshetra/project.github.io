## Integration of small-sized apartments with smart features like solar equipped-
The idea is to build small-sized apartments equipped with smart features such as solar panels on previously unused or difficult-to-utilize land spaces. These spaces could include small gulleys, areas under train bridges, or narrow urban gaps. This approach offers several benefits:

- **Efficient Use of Urban Space**: By utilizing underused land, such as narrow passages or gaps between buildings, we can make more room for living spaces in crowded cities.
- **Affordable Housing**: Since these apartments occupy small areas, they can be built at a much lower cost compared to traditional housing. This makes them an attractive solution for providing affordable housing in cities with limited land.
- **Sustainability**: Incorporating smart features such as solar panels allows these buildings to be eco-friendly and sustainable.


A **Segment Tree** is an ideal data structure for managing range queries and updates, especially when working with intervals or regions of land. For this case, each node in the tree could represent a region of land, and the tree would allow us to efficiently calculate the available land in a given range.

- **Range Queries**: You can use the segment tree to query for available space in a specific region of land (e.g., find all gaps of unused land between certain coordinates).
- **Dynamic Updates**: When land is used for constructing apartments, the segment tree can be updated to reflect the change in land status.
- **Efficiency**: Segment trees provide `O(log n)` time complexity for both querying and updating, making them very efficient for applications with dynamic data, such as this one.
Code for segment tree can be seen here [Segment tree code](#segment_tree.cpp)


**Binary Indexed Tree (BIT) / Fenwick Tree**

#### Explanation:
A **Binary Indexed Tree (BIT)** is another efficient data structure that supports range queries and updates, though it is typically used for simpler tasks. It might not offer as much flexibility as a segment tree for dynamic range updates, but it is a viable option for smaller or simpler land tracking applications.

- **Range Sum Queries**: BIT excels in scenarios where cumulative sum queries are needed, such as finding the total unused land in a specific range.
- **Efficient Updates**: BIT provides efficient updates to land status, although it might not be as effective as a segment tree when working with more complex data or larger datasets.

---
