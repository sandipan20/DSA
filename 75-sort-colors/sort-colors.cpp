class Solution {
public:
    void sortColors(vector<int>& nums) {
        int r=0,w=0,b=nums.size()-1;
        while(w<=b){
            if(nums[w]==0){
                if(r==w){
                    w++;
                    continue;
                }
                swap(nums[r],nums[w]);
                r++;
                
            } else if(nums[w]==2){
                swap(nums[b],nums[w]);
                b--;
            } else if(nums[w]==1){
                w++;
            }
        }
    }
};