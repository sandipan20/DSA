#include<iostream>
using namespace std;
class Solution {
public:
    int maxDepth(string s) {
        int count = 0; // Current open parentheses
        int ans = 0;   // Maximum depth reached
        
        for (char c : s) {
            if (c == '(') {
                count++;
                if (count > ans) ans = count; 
            } else if (c == ')') {
                if (count > 0) count--;
            }
        }
        return ans;
    }
};

/*Given a valid parentheses string s, return the nesting depth of s. The nesting depth is the maximum number of nested parentheses.

 

Example 1:

Input: s = "(1+(2*3)+((8)/4))+1"

Output: 3

Explanation:

Digit 8 is inside of 3 nested parentheses in the string.

Example 2:

Input: s = "(1)+((2))+(((3)))"

Output: 3

Explanation:

Digit 3 is inside of 3 nested parentheses in the string.

Example 3:

Input: s = "()(())((()()))"

Output: 3

 

Constraints:

1 <= s.length <= 100
s consists of digits 0-9 and characters '+', '-', '*', '/', '(', and ')'.
It is guaranteed that parentheses expression s is a VPS.*/