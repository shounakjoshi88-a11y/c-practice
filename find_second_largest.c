#include <stdio.h>
int main() {
    int arr[] = {10, 50, 30, 90, 40};
    int n = 5, first = -1, second = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        } else if (arr[i] > second)
            second = arr[i];
    }
    printf("Second largest: %d\n", second);
    return 0;
}
