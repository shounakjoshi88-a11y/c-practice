#include <stdio.h>
#include <stdlib.h>
int main() {
    int n, *ptr;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    // calloc initializes memory to zero
    ptr = (int*) calloc(n, sizeof(int));
    if(ptr == NULL) {
        printf("Memory not allocated.\n");
        exit(0);
    }
    printf("Enter elements: ");
    for(int i = 0; i < n; ++i) {
        scanf("%d", ptr + i);
    }
    int largest = *ptr;
    for(int i = 1; i < n; ++i) {
        if(*(ptr + i) > largest) largest = *(ptr + i);
    }
    printf("Largest element = %d\n", largest);
    free(ptr);
    return 0;
}
