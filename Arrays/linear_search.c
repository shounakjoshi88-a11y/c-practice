#include <stdio.h>
int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = 5, search = 30, found = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i] == search) {
            found = i;
            break;
        }
    }
    if (found != -1)
        printf("Element found at index: %d\n", found);
    else
        printf("Element not found\n");
    return 0;
}
