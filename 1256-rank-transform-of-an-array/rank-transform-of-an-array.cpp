class Solution {
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
    int idx = 1;

public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        int n = arr.size();
        vector<int> ans(n);

        for(int i = 0; i < n; i++)
            pq.push({arr[i], i});

        int prev = INT_MIN;

        while(!pq.empty()) {
            int no = pq.top().first;
            int i = pq.top().second;
            pq.pop();

            if(no != prev) {
                prev = no;
                ans[i] = idx++;
            }
            else {
                ans[i] = idx - 1;
            }
        }

        return ans;
    }
};