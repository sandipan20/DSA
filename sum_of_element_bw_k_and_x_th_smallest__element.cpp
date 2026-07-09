#include<iostream>
using namespace std;
class Solution {
  public:
    long long sumBetweenTwoKth(long long A[], long long N, long long k1, long long k2) {
        // Your code goes here
        priority_queue<long long> h1,h2;
        
        for(long long i=0;i<k1;i++)
        h1.push(A[i]);
        for(long long i=0;i<k2-1;i++)
        h2.push(A[i]);
        
        for(long long i=k1;i<N;i++){
            if(A[i]<h1.top()){
                h1.pop();
                h1.push(A[i]);
            }
        }
        for(long long i=k2-1;i<N;i++){
            if(A[i]<h2.top()){
                h2.pop();
                h2.push(A[i]);
            }
        }
        
        long long s1=0,s2=0;
        while(!h1.empty()){
            s1+=h1.top();
            h1.pop();
        }
        while(!h2.empty()){
            s2+=h2.top();
            h2.pop();
        }
        return s2-s1;
        
    }
};
/*Given an array A[] of N positive integers and two positive integers K1 and K2. Find the sum of all elements between K1th and K2th smallest elements of the array. It may be assumed that (1 <= k1 < k2 <= n).

 

Example 1:

Input:
N  = 7
A[] = {20, 8, 22, 4, 12, 10, 14}
K1 = 3, K2 = 6
Output:
26
Explanation:
3rd smallest element is 10
6th smallest element is 20
Element between 10 and 20 
12,14. Their sum = 26.
 

Example 2:

Input
N = 6
A[] = {10, 2, 50, 12, 48, 13}
K1= 2, K2 = 6
Output:
73
 

Your Task:  
You don't need to read input or print anything. Your task is to complete the function sumBetweenTwoKth() which takes the array A[], its size N and two integers K1 and K2 as inputs and returns the sum of all the elements between K1th and K2th smallest elements.
 

Expected Time Complexity: O(N. log(N))
Expected Auxiliary Space: O(N)

 

Constraints:
1 ≤ N ≤ 105
1 ≤ K1, K2 ≤ 105
*/