class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int left=0,zero=0,ans=0,n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]==0)
                zero++;
            while(zero>k){
                if(nums[left]==0)
                    zero--;
                left++;
            }
            ans=max(ans,i-left+1);
        }
        return ans;
    }
};