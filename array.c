#include <stdio.h>

int main() {
    int arr[10] = {10, 20, 30, 40, 50};
    int size = 5;
    int i;


    printf("Original: ");
    for (i = 0; i < size; i++) printf("%d ", arr[i]);
    printf("\n");

// Insert
    for (i = size; i > 2; i--) arr[i] = arr[i - 1];
    arr[2] = 25;
    size++;

    printf("After insert: ");
    for (i = 0; i < size; i++) printf("%d ", arr[i]);
    printf("\n");

// Delete
    for (i = 4; i < size - 1; i++) arr[i] = arr[i + 1];
    size--;

    printf("After delete: ");
    for (i = 0; i < size; i++) printf("%d ", arr[i]);
    printf("\n");

    return 0;
}