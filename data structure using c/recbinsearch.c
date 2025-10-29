#include <stdio.h>

int binsearch(int arr[], int start, int end, int key) {
    if (start <= end) {
        int mid = (start + end) / 2;

        if (arr[mid] == key) {
            return mid;
        }
        else if (arr[mid] > key) {
            return binsearch(arr, start, mid - 1, key);
        }
        else {
            return binsearch(arr, mid + 1, end, key);
        }
    }
    return -1;  
}

int main() {
    int n, key, i;
    printf("NAME-SANDIPAN\nROLL NO- 2301920100272\n");
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n]; 
    printf("Enter %d elements in sorted order:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &key);

    int result = binsearch(arr, 0, n - 1, key);

    if (result != -1) {
        printf("Element %d found at position %d (index %d).\n", key, result + 1, result);
    }
    else {
        printf("Element %d not found in the array.\n", key);
    }

    return 0;
}
