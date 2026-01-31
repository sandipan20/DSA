#include <vector>
#include <algorithm>
using namespace std;
// copied from gpt/

// need to re attempt
class Solution {
public:
    int minimumK(vector<int>& nums) {
        long long left = 1;
        long long mx = *max_element(nums.begin(), nums.end());
        long long right = max(mx, (long long)nums.size());
        long long ans = right;

        while (left <= right) {
            long long k = left + (right - left) / 2;
            long long ops = 0;

            for (int x : nums) {
                ops += (x + k - 1) / k;  // ceil(x/k)
                if (ops > k * k) break;
            }

            if (ops <= k * k) {
                ans = k;
                right = k - 1;
            } else {
                left = k + 1;
            }
        }
        return ans;
    }
};

