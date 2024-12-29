#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Interval {
    int start, end;
};

// Comparator function for sorting intervals by their start position
bool compare(Interval a, Interval b) {
    return a.start < b.start;
}

int main() {
    vector<Interval> intervals = {{5, 10}, {1, 3}, {2, 6}, {8, 12}};
    
    // Sorting intervals by start position
    sort(intervals.begin(), intervals.end(), compare);
    
    // Printing sorted intervals
    for (auto interval : intervals) {
        cout << "[" << interval.start << ", " << interval.end << "] ";
    }
    cout << endl;
    
    return 0;
}
