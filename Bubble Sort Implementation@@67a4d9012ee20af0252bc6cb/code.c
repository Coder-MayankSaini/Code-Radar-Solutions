#include <stdio.h>

void swap(int a, int i, int j) {
    int temp = a[i];
    a[i] = a[j];
    a[j] = temp;
}

void bubbleSort(int a, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                swap(a, j, j + 1);
            }
        }
    }
}

void printArray(int arr, int n) {
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}