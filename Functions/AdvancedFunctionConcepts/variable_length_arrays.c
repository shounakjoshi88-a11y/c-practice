#include <stdio.h>

int sumArray(int size, int arr[size]) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {10, 20, 30};
    
    printf("Sum 1: %d\n", sumArray(5, arr1));
    printf("Sum 2: %d\n", sumArray(3, arr2));
    
    return 0;
}
