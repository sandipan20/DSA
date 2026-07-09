#include<iostream>
using namespace std;
class Solution {
public:
    vector<int> smallestRange(vector<vector<int>>& nums) {
        // pair<int,pair<int,int>>
        vector<pair<int,pair<int,int>>> arr;
        int mini=INT_MAX,maxi=INT_MIN;

        for(int i=0;i<nums.size();i++){
            arr.push_back({nums[i][0],{i,0}});
            maxi=max(maxi,nums[i][0]);
        }
        priority_queue<pair<int,pair<int,int>>, vector<pair<int,pair<int,int>>>, greater<pair<int,pair<int,int>>>  > heap(arr.begin(),arr.end());
        mini=heap.top().first;
        vector<int> range={maxi,mini};
        pair<int,pair<int,int>> temp;
        int row,col,ele;
        while(heap.size()==nums.size()){
            temp=heap.top();
            heap.pop();
            row=temp.second.first;
            col=temp.second.second;
            ele=temp.first;
            if(col+1<nums[row].size()){
                col++;
                heap.push({nums[row][col],{row,col}});
                maxi=max(maxi,nums[row][col]);
                mini=heap.top().first;
                if(maxi-mini<range[0]-range[1]){
                    range[0]=maxi;
                    range[1]=mini;
                }
            }
        }
        return range;
    }
};

/*You have k lists of sorted integers in non-decreasing order. Find the smallest range that includes at least one number from each of the k lists.

We define the range [a, b] is smaller than range [c, d] if b - a < d - c or a < c if b - a == d - c.

 

Example 1:

Input: nums = [[4,10,15,24,26],[0,9,12,20],[5,18,22,30]]
Output: [20,24]
Explanation: 
List 1: [4, 10, 15, 24,26], 24 is in range [20,24].
List 2: [0, 9, 12, 20], 20 is in range [20,24].
List 3: [5, 18, 22, 30], 22 is in range [20,24].
Example 2:

Input: nums = [[1,2,3],[1,2,3],[1,2,3]]
Output: [1,1]
 

Constraints:

nums.length == k
1 <= k <= 3500
1 <= nums[i].length <= 50
-105 <= nums[i][j] <= 105
nums[i] is sorted in non-decreasing order.*/