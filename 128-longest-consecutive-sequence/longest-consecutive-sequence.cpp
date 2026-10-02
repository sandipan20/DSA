class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int ans=0;
        unordered_set<int> mp(nums.begin(),nums.end());
        for(int i:mp){
            if(mp.find(i-1)==mp.end()){//if no smaller element exist than the current one if exit we directly go to next element by iterating
                int curr=i;
                int len=1;

                while(mp.find(curr+1)!=mp.end()){
                    curr++;
                    len++;
                }
                ans=max(len,ans);
            }
        }
        return ans;
    }
};