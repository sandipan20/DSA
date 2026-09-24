class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        vector<int> alp(26, 0);

        int maxi = INT_MIN;

        for(int i = 0; i < tasks.size(); i++) {
            alp[tasks[i] - 'A']++;
        }

        for(int i = 0; i < 26; i++) {
            maxi = max(maxi, alp[i]);
        }

        int countmaxi=0;
        for(int i=0;i<26;i++){
            if(maxi==alp[i])
                countmaxi++;
        }

        int ans=(maxi-1)*(n+1)+countmaxi;
        //this is like we are counting the fixed no of interval and leving last for high freq for the countmaxi it will be the deciding part what will be the last lenght of the ans after claculating the size for freq-1 , because the no of uniue task that will be eq to the max task will be the only one that is going outside the last max freq.
        return max(ans,(int)tasks.size());
    }
};