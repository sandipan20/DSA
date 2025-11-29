// Write a function that reverses a string. The input string is given as an array of characters s.

// You must do this by modifying the input array in-place with O(1) extra memory.

 

// Example 1:

// Input: s = ["h","e","l","l","o"]
// Output: ["o","l","l","e","h"]
// Example 2:

// Input: s = ["H","a","n","n","a","h"]
// Output: ["h","a","n","n","a","H"]
 

// Constraints:

// 1 <= s.length <= 105
// s[i] is a printable ascii character.
#include<iostream>
using namespace std;
class Solution {
public:
    void reverseString(vector<char>& s) {// stack 
        stack<char> c;

        for(char ch:s){
            c.push(ch);
        }
        int i=0;
        while(!c.empty()){
            s[i]=c.top();
            c.pop();
            i++;
        }
    }
};
class Solution {// two pointer
public:
    void reverseString(vector<char>& s) {
        int n=s.size();
        int st=0,end=n-1;
        while(st<end){
            swap(s[st++],s[end--]);
        }
    }
};