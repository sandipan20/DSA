class Solution {
public:
    int maxProfit(vector<int>& price) {
        int n=price.size();
        int minprice=price[0];
        int ans=0;
        for(int i=1;i<n;i++){
            ans=max(ans,price[i]-minprice);
            minprice=min(price[i],minprice);
        }
        return ans;
    }
};