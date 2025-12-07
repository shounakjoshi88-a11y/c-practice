#include <stdio.h>
int main() {
    int arr[] = {10, 100, 200};
    int *ptr;
    ptr = arr;
    for (int i = 0; i < 3; i++) {
        printf("Value of arr[%d] = %d\n", i, *ptr);
        printf("Address of arr[%d] = %p\n", i, ptr);
        ptr++; // Move to next integer location
    }
    return 0;
}
