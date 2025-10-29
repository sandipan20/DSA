#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (arr[j] <= pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return i + 1;
}

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int n;
    printf ("sandipan\n2301920100272\n");
    printf("Quick Sort Program \n\n");

    printf("How many numbers do you want to sort? ");
    scanf("%d", &n);

    int arr[n];
    printf("Please enter %d numbers:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("\nYour numbers before sorting:\n");
    printArray(arr, n);

    quickSort(arr, 0, n - 1);

    printf("\nNumbers after Quick Sort (ascending order):\n");
    printArray(arr, n);

    printf("\nSorting complete!\n");

    return 0;
}

