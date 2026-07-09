#include<iostream>
using namespace std;
class Solution {
public:
    string frequencySort(string s) {
        // 1. Count occurrences of each character
        unordered_map<char, int> freq;
        for (char c : s) freq[c]++;

        // 2. Put pairs into a vector for sorting
        vector<pair<int, char>> v;
        for (auto& it : freq) {
            v.push_back({it.second, it.first});
        }

        // 3. Sort by frequency in descending order
        sort(v.begin(), v.end(), [](const pair<int, char>& a, const pair<int, char>& b) {
            return a.first > b.first;
        });

        // 4. Build the final string
        string result = "";
        for (auto& it : v) {
            result.append(it.first, it.second);
        }

        return result;
    }
};
// this has not been done by myself
/*Given a string s, sort it in decreasing order based on the frequency of the characters. The frequency of a character is the number of times it appears in the string.

Return the sorted string. If there are multiple answers, return any of them.

 

Example 1:

Input: s = "tree"
Output: "eert"
Explanation: 'e' appears twice while 'r' and 't' both appear once.
So 'e' must appear before both 'r' and 't'. Therefore "eetr" is also a valid answer.
Example 2:

Input: s = "cccaaa"
Output: "aaaccc"
Explanation: Both 'c' and 'a' appear three times, so both "cccaaa" and "aaaccc" are valid answers.
Note that "cacaca" is incorrect, as the same characters must be together.
Example 3:

Input: s = "Aabb"
Output: "bbAa"
Explanation: "bbaA" is also a valid answer, but "Aabb" is incorrect.
Note that 'A' and 'a' are treated as two different characters.
 

Constraints:

1 <= s.length <= 5 * 105
s consists of uppercase and lowercase English letters and digits.
 
*/