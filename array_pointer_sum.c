#include <stdio.h>
int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int *ptr = arr, sum = 0;
    for (int i = 0; i < 5; i++)
        sum += *(ptr + i);
    printf("Sum using pointers: %d\n", sum);
    return 0;
}
