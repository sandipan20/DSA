#include<iostream>
using namespace std;
// User function Template for C++

class Solution {
  public:
    void heapify(vector<int> &ans,int i,int n){
        // step down heapify
        int largest=i;
        int left=2*i+1;
        int right=2*i+2;
        
        if(left<n&&ans[left]>ans[largest]){
            largest=left;
        }
        if(right<n&&ans[right]>ans[largest]){
            largest=right;
        }
        if(largest!=i){
            swap(ans[largest],ans[i]);
            heapify(ans,largest,n);
        }
    }
    vector<int> mergeHeaps(vector<int> &a, vector<int> &b, int n, int m) {
        // your code here
        vector<int> ans;
        for(int i:a){
            ans.push_back(i);
        }
        for(int i:b){
            ans.push_back(i);
        }
        // convert the fin in heapify
        int s=n+m;
        for(int i=s/2-1;i>=0;i--){
            heapify(ans,i,s);
        }
        return ans;
        
    }
};
/*Given two binary max heaps as arrays, merge the given heaps to form a new max heap.

 

Example 1:

Input  : 
n = 4 m = 3
a[] = {10, 5, 6, 2}, 
b[] = {12, 7, 9}
Output : 
{12, 10, 9, 2, 5, 7, 6}
Explanation :




 

 

Your Task:  
You don't need to read input or print anything. Your task is to complete the function mergeHeaps() which takes the array a[], b[], its size n and m, as inputs and return the merged max heap. Since there can be multiple solutions, therefore, to check for the correctness of your solution, your answer will be checked by the driver code and will return 1 if it is correct, else it returns 0.

 

Constraints:
1 <= n, m <= 105
1 <= a[i], b[i] <= 2*105
 


 

 
*/