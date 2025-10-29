#include <stdio.h>

void shellSort(int arr[], int n) {
    for (int i = n / 2; i > 0; i /= 2) {
        for (int i = i; i < n; i++) {
            int temp = arr[i];
            int j;
            for (j = i; j >= i && arr[j - i] > temp; j -= i) {
                arr[j] = arr[j - i];
            }
            arr[j] = temp;
        }
    }
}

int main() {
    int n;
    printf("SANDIPAN\n2301920100272\n");
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    shellSort(arr, n);

    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
