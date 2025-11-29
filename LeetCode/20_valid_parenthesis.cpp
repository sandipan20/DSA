/*Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

An input string is valid if:

Open brackets must be closed by the same type of brackets.
Open brackets must be closed in the correct order.
Every close bracket has a corresponding open bracket of the same type.
 

Example 1:

Input: s = "()"

Output: true

Example 2:

Input: s = "()[]{}"

Output: true

Example 3:

Input: s = "(]"

Output: false

Example 4:

Input: s = "([])"

Output: true

Example 5:

Input: s = "([)]"

Output: false

 

Constraints:

1 <= s.length <= 104
s consists of parentheses only '()[]{}'.*/
#include<iostream> 
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> ch;
        for(char c:s){
            if(c=='('|| c=='{'|| c=='['){
                ch.push(c);
            } else{
                if(ch.empty()) return false;
                if(c==')' && ch.top()=='('){
                    ch.pop();
                } else if(c=='}' && ch.top()=='{'){
                    ch.pop();
                } else if(c==']' && ch.top()=='['){
                    ch.pop();
                } else{
                    return false;
                }
            }
        }
        if(!ch.size()) return true;
        return false;
    }
};