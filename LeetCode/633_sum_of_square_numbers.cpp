#include<iostream>
using namespace std;
class Solution {
public:
    bool judgeSquareSum(int c) {
        long long j = sqrt(c), i = 0;
        while (i <= j) {
            long long sum = i * i + j * j;
            if (sum == c){
                return true;
            }else if (sum < c){
                i++;
            } else{
                j--;
            }
        }
        return false;
    }
};
/*Given a non-negative integer c, decide whether there're two integers a and b such that a2 + b2 = c.

 

Example 1:

Input: c = 5
Output: true
Explanation: 1 * 1 + 2 * 2 = 5
Example 2:

Input: c = 3
Output: false
 

Constraints:

0 <= c <= 231 - 1
*/