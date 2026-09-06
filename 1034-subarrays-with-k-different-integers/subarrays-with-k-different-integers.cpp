class Solution {
    int atmost(vector<int>& nums, int k){
        unordered_map<int,int>mp;//no and occurance
        int n=nums.size();
        int left=0;
        int ans=0;
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
            while(mp.size()>k){
                mp[nums[left]]--;
                if(mp[nums[left]]==0){
                    mp.erase(nums[left]);
                }
                left++;
            }
            ans+=i-left+1;
        }
        return ans;
    }
public:
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return atmost(nums,k)-atmost(nums,k-1);
    }
};