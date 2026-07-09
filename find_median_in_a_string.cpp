#include<iostream>
using namespace std;
class Solution {
  public:
    vector<double> getMedian(vector<int> &arr) {
        vector<double> ans;
        
        priority_queue<int> left;  // max heap
        priority_queue<int, vector<int>, greater<int>> right; // min heap
        
        for(int num : arr) {
            
            // Step 1: Insert into appropriate heap
            if(left.empty() || num <= left.top()) {
                left.push(num);
            } else {
                right.push(num);
            }
            
            // Step 2: Balance the heaps
            if(left.size() > right.size() + 1) {
                right.push(left.top());
                left.pop();
            }
            else if(right.size() > left.size()) {
                left.push(right.top());
                right.pop();
            }
            
            // Step 3: Calculate median
            if(left.size() == right.size()) {
                ans.push_back((left.top() + right.top()) / 2.0);
            } else {
                ans.push_back(left.top());
            }
        }
        
        return ans;
    }
};

/*Given a data stream arr[] where integers are read sequentially, the task is to determine the median of the elements encountered so far after each new integer is read.

The median is defined as follows:

1. Odd number of elements: The median is the middle element when the current set of numbers is sorted.
2. Even number of elements: The median is the arithmetic mean (average) of the two middle elements when the current set of numbers is sorted.

Examples:

Input: arr[] = [5, 15, 1, 3, 2, 8]
Output: [5.0, 10.0, 5.0, 4.0, 3.0, 4.0] 
Explanation: 
After reading 1st element of stream – 5 -> median = 5.0
After reading 2nd element of stream – 5, 15 -> median = (5+15)/2 = 10.0 
After reading 3rd element of stream – 5, 15, 1 -> median = 5.0
After reading 4th element of stream – 5, 15, 1, 3 ->  median = (3+5)/2 = 4.0
After reading 5th element of stream – 5, 15, 1, 3, 2 -> median = 3.0
After reading 6th element of stream – 5, 15, 1, 3, 2, 8 ->  median = (3+5)/2 = 4.0
Input: arr[] = [2, 2, 2, 2]
Output: [2.0, 2.0, 2.0, 2.0]
Explanation: 
After reading 1st element of stream – 2 -> median = 2.0
After reading 2nd element of stream – 2, 2 -> median = (2+2)/2 = 2.0
After reading 3rd element of stream – 2, 2, 2 -> median = 2.0
After reading 4th element of stream – 2, 2, 2, 2 ->  median = (2+2)/2 = 2.0
Constraints:
1 ≤ arr.size() ≤ 105
1 ≤ arr[i] ≤ 106
*/