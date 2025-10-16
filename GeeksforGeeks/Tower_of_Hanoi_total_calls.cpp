// You are given n disks placed on a starting rod (from), with the smallest disk on top and the largest at the bottom. There are three rods: the starting rod(from), the target rod (to), and an auxiliary rod (aux).
// You have to calculate the minimum number of moves required to transfer all n disks from the starting rod to the target rod, following these rules:
//       1. Only one disk can be moved at a time.
//       2. A disk can only be placed on top of a larger disk or on an empty rod.
// Return the minimum number of moves needed to complete the task.

// Examples:

// Input: n = 2
// Output: 3
// Explanation: For n = 2, total 3 steps will be taken. Steps are as follows -
// move disk 1 from rod 1 to rod 2
// move disk 2 from rod 1 to rod 3
// move disk 1 from rod 2 to rod 3
// Input: n = 3
// Output: 7
// Explanation: For n = 3, total 7 steps will be taken.Steps are as follows -
// move disk 1 from rod 1 to rod 3
// move disk 2 from rod 1 to rod 2
// move disk 1 from rod 3 to rod 2
// move disk 3 from rod 1 to rod 3
// move disk 1 from rod 2 to rod 1
// move disk 2 from rod 2 to rod 3
// move disk 1 from rod 1 to rod 3
// Input: n = 0
// Output: 0
// Explanation: Total 0 steps will be taken.
// Constraints:
//   0 ≤ n ≤ 20

#include<iostream>
using namespace std;

class Solution {
  public:
    int towerOfHanoi(int n, int from, int to, int aux) {
        // code here
        return pow(2,n)-1;
    }
};
class Solution {
  public:
    void towerOfHanoi(int n, int from, int to, int aux) {
        // code here
        if(n==1){
            cout<<"move disk "<<n<<"from "<<from<<"to "<<to<<endl;
            return;
        }
        towerOfHanoi(n-1,from,aux,to);
        cout<<"move disk "<<n<<"from "<<from<<"to "<<to<<endl;
        towerOfHanoi(n-1,aux,to,from);
    }
};

