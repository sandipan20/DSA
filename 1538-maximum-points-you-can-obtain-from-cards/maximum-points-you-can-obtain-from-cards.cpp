class Solution {
    int minimum_sum(vector<int>& cardPoints, int n){
        int subarray_sum=0;
        for(int i=0;i<n;i++){
            subarray_sum+=cardPoints[i];
        }
        int ans=subarray_sum;
        for(int i=n;i<cardPoints.size();i++){
            subarray_sum+=cardPoints[i];
            subarray_sum-=cardPoints[i-n];
            ans=min(ans,subarray_sum);
        }

        return ans;
    }
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n=cardPoints.size()-k;
        int total=0;
        for(int i:cardPoints)
            total+=i;
        return total-minimum_sum(cardPoints,n);
    }
};