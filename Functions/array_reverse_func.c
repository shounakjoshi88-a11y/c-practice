#include <stdio.h>

void reverseArray(int arr[], int size) {
    for (int i = size - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    reverseArray(arr, 5);
    return 0;
}
