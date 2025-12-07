#include <stdio.h>

int isEven(int n) { return n % 2 == 0; }
int isOdd(int n) { return n % 2 != 0; }

int count_matching(int arr[], int size, int (*predicate)(int)) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (predicate(arr[i])) count++;
    }
    return count;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    printf("Even numbers: %d\n", count_matching(arr, 10, isEven));
    printf("Odd numbers: %d\n", count_matching(arr, 10, isOdd));
    return 0;
}
