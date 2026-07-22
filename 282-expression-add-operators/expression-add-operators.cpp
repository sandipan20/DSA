class Solution {
public:

    // idx  -> Current index
    // val  -> Value of expression till now
    // prev -> Last operand (needed for '*')
    // temp -> Current expression
    void backtrack(vector<string> &ans,
                   string &temp,
                   string num,
                   int target,
                   int idx,
                   long long val,
                   long long prev) {

        // If all digits are used
        if (idx == num.size()) {
            if (val == target)
                ans.push_back(temp);
            return;
        }

        long long curr = 0;

        // Form every possible number starting from idx
        for (int i = idx; i < num.size(); i++) {

            // Skip numbers with leading zeros
            if (i > idx && num[idx] == '0')
                break;

            curr = curr * 10 + (num[i] - '0');

            string s = num.substr(idx, i - idx + 1);

            int len = temp.size();

            // First number
            if (idx == 0) {

                temp += s;

                backtrack(ans, temp, num, target, i + 1, curr, curr);

                temp.resize(len);
            }
            else {

                // +
                temp += "+" + s;
                backtrack(ans, temp, num, target, i + 1, val + curr, curr);
                temp.resize(len);

                // -
                temp += "-" + s;
                backtrack(ans, temp, num, target, i + 1, val - curr, -curr);
                temp.resize(len);

                // *
                temp += "*" + s;
                backtrack(ans, temp, num, target, i + 1, val - prev + prev * curr, prev * curr);
                temp.resize(len);
            }
        }
    }

    vector<string> addOperators(string num, int target) {
        vector<string> ans;
        string temp;
        backtrack(ans, temp, num, target, 0, 0, 0);
        return ans;
    }
};