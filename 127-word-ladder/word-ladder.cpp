
class Solution {
public:
    int ladderLength(string beginWord, string endWord,
                     vector<string>& wordList) {

        unordered_set<string> set(wordList.begin(), wordList.end());

        if (set.find(endWord) == set.end())
            return 0;

        queue<pair<string, int>> q;
        q.push({beginWord, 1});
        set.erase(beginWord);

        while (!q.empty()) {
            string x = q.front().first;
            int seqlength = q.front().second;
            q.pop();

            if (x == endWord)
                return seqlength;

            for (int i = 0; i < x.length(); i++) {
                char c = x[i];

                for (char a = 'a'; a <= 'z'; a++) {
                    x[i] = a;

                    if (set.find(x) != set.end()) {
                        q.push({x, seqlength + 1});
                        set.erase(x);
                    }
                }

                x[i] = c;
            }
        }

        return 0;
    }
};
