class Solution {
    int atMost(vector<int>& nums, int k) {
        if (k < 0) return 0;
        int count = 0, odd = 0, j = 0;
        
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] & 1) {
                odd++;
            }
            while (odd > k) {
                if (nums[j] & 1) {
                    odd--;
                }
                j++;
            }
            count += (i - j + 1);
        }
        return count;
    }
private:
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        // Exactly k = (at most k) - (at most k - 1)
        return atMost(nums, k) - atMost(nums, k - 1);
    }
};