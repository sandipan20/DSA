// Given a collection of numbers, nums, that might contain duplicates, return all possible unique permutations in any order.

 

// Example 1:

// Input: nums = [1,1,2]
// Output:
// [[1,1,2],
//  [1,2,1],
//  [2,1,1]]
// Example 2:

// Input: nums = [1,2,3]
// Output: [[1,2,3],[1,3,2],[2,1,3],[2,3,1],[3,1,2],[3,2,1]]
 

// Constraints:

// 1 <= nums.length <= 8
// -10 <= nums[i] <= 10


#include<iostream>
using namespace std;
class Solution {
public:
    void permute(vector<vector<int>> & ans, vector<int> & nums, int idx){
        if(idx== nums.size()-1){
            ans.push_back(nums);
            return;
        }
        vector<bool> track(21,0);
        for(int i=idx;i<nums.size();i++){
            if(track[nums[i]+10]==0){
                track[nums[i]+10]=1;
                swap(nums[idx],nums[i]);
                permute(ans,nums,idx+1);
                swap(nums[idx],nums[i]);
            }
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
       vector<vector<int>> ans;
       permute(ans,nums,0);
       return ans;
    }
};