
class Solution {
public:
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        int n = graph.size();

        unordered_set<int> safe;

        // Step 1: Insert terminal nodes
        for (int i = 0; i < n; i++) {
            if (graph[i].empty()) {
                safe.insert(i);
            }
        }

        // Step 2: Keep finding new safe nodes
        bool changed = true;

        while (changed) {
            changed = false;

            for (int i = 0; i < n; i++) {
                if (safe.count(i)) {
                    continue;
                }

                bool allSafe = true;

                for (int x : graph[i]) {
                    if (!safe.count(x)) {
                        allSafe = false;
                        break;
                    }
                }

                if (allSafe) {
                    safe.insert(i);
                    changed = true;
                }
            }
        }

        // Step 3: Return safe nodes in ascending order
        vector<int> ans;

        for (int i = 0; i < n; i++) {
            if (safe.count(i)) {
                ans.push_back(i);
            }
        }

        return ans;
    }
};
