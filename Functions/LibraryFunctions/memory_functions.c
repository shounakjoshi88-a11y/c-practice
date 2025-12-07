#include <stdio.h>
#include <string.h>

int main() {
    int arr1[5] = {1, 2, 3, 4, 5};
    int arr2[5];
    
    memcpy(arr2, arr1, 5 * sizeof(int));
    
    printf("Original: ");
    for (int i = 0; i < 5; i++) printf("%d ", arr1[i]);
    printf("\nCopied: ");
    for (int i = 0; i < 5; i++) printf("%d ", arr2[i]);
    printf("\n");
    return 0;
}
