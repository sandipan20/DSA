#include <stdio.h>

int main() {
    int n, search;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements in sorted order:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to search: ");
    scanf("%d", &search);
    int first = 0, last = n - 1, mid;
    int result = -1;
    while (first <= last) {
        mid = first + (last - first) / 2;

        if (arr[mid] == search) {
            result = mid;
            break;
        } else if (arr[mid] < search) {
            first = mid + 1;
        } else {
            last = mid - 1;
        }
    }
    if (result != -1)
        printf("Element found at index %d\n", result+1);
    else
        printf("Element not found in the array\n");

    return 0;
}
