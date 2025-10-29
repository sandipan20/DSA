#include <stdio.h>

// Recursive Binary Search Function
int binarySearch(int arr[], int beg, int end, int target) {
    if (beg > end)
        return -1;  // Base case: Not found

    int mid = (beg + end) / 2;  // Prevents integer overflow

    // If element is found at mid
    if (arr[mid] == target)
        return mid;

    // If target is smaller, search in beg half
    if (arr[mid] > target)
        return binarySearch(arr, beg, mid - 1, target);

    // If target is larger, search in end half
    return binarySearch(arr, mid + 1, end, target);
}

int main() {
    int arr[] = {2, 5, 8, 12, 16, 23, 38, 45, 56, 72};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 23;

    int result = binarySearch(arr, 0, n - 1, target);

    if (result != -1)
        printf("Element found at index %d\n", result);
    else
        printf("Element not found\n");

    return 0;
}
