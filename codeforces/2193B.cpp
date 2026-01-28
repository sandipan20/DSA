// this question is not self made copied from claud ai.


#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        
        int l = -1, r = -1;
        
        // Find the first position where we don't have the optimal value
        for (int i = 0; i < n; i++) {
            // At position i, we want the value (n - i)
            if (arr[i] != n - i) {
                l = i;
                // Find where the maximum value from position i onwards is located
                int maxVal = arr[i];
                r = i;
                for (int j = i + 1; j < n; j++) {
                    if (arr[j] > maxVal) {
                        maxVal = arr[j];
                        r = j;
                    }
                }
                break;
            }
        }
        
        // If we found a segment to reverse, do it
        if (l != -1) {
            reverse(arr.begin() + l, arr.begin() + r + 1);
        }
        
        // Output the result
        for (int i = 0; i < n; i++) {
            cout << arr[i];
            if (i < n - 1) cout << " ";
        }
        cout << endl;
    }
    
    return 0;
}