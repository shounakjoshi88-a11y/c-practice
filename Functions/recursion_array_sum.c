#include <stdio.h>

int arraySumRecursive(int arr[], int n) {
    if (n <= 0) {
        return 0;
    }
    return arr[n - 1] + arraySumRecursive(arr, n - 1);
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    printf("Array sum: %d\n", arraySumRecursive(arr, 5));
    return 0;
}
