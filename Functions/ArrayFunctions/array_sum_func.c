#include <stdio.h>

int arraySum(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    printf("Sum: %d\n", arraySum(arr, 5));
    return 0;
}
