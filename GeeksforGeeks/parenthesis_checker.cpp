#include<iostream>
using namespace std;
class Solution {
  public:
    bool isBalanced(string& s) {
        // code here
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
/*Given a string s, composed of different combinations of '(' , ')', '{', '}', '[', ']'. Determine whether the Expression is balanced or not.
An expression is balanced if:

Each opening bracket has a corresponding closing bracket of the same type.
Opening brackets must be closed in the correct order.
Examples :

Input: s = "[{()}]"
Output: true
Explanation: All the brackets are well-formed.
Input: s = "[()()]{}"
Output: true
Explanation: All the brackets are well-formed.
Input: s = "([]"
Output: false
Explanation: The expression is not balanced as there is a missing ')' at the end.
Input: s = "([{]})"
Output: false
Explanation: The expression is not balanced as there is a closing ']' before the closing '}'.
Constraints:
1 ≤ s.size() ≤ 106
s[i] ∈ {'{', '}', '(', ')', '[', ']'}
*/