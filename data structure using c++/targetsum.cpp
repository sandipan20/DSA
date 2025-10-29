#include <iostream>
using namespace std;

bool targetsum(int arr[], int tar, int st, int end) {
    if(tar == 0) return true;               // found a valid subset
    if(st > end || tar < 0) return false;   // went past array or negative sum

    // not pick OR pick
    return targetsum(arr, tar, st+1, end) || 
           targetsum(arr, tar - arr[st], st+1, end);
}

int main() {
    int arr[] = {3, 6, 4, 5};
    int tar = 12;
    int n = sizeof(arr)/sizeof(arr[0]);

    cout << (targetsum(arr, tar, 0, n-1) ? "Yes" : "No");
    return 0;
}
