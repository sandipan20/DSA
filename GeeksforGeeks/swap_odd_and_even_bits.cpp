#include<iostream>
using namespace std;
class Solution {
  public:
    unsigned int swapBits(unsigned int n) {
        // code here
        for(int i=0;i<32;i+=2){
            int l=(n>>i)&1;
            int r=(n>>(i+1))&1;
            if(l!=r){
                n^=(1<<i);
                n^=(1<<(i+1));
            }
        }
        return n;
    }
};
/*Given an unsigned integer n, You have  to swap all even-position bits with their rightside adjacent odd-position bits.

Examples:

Input: n = 23
Output: 43
Explanation: Binary representation of the given number  is 00010111 after swapping  00101011 = 43 in decimal.
Input: n = 2
Output: 1
Explanation: Binary representation of the given number is 10 after swapping 01 = 1 in decimal.
Constraints:
1 ≤ n ≤ 109
*/