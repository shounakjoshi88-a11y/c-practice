#include <stdio.h>
int main() {
    int arr[] = {10, 20, 30, 40, 50, 60, 70};
    int n = 7, target = 40, left = 0, right = n - 1, found = -1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target) {
            found = mid;
            break;
        }
        if (arr[mid] < target)
            left = mid + 1;
        else
            right = mid - 1;
    }
    if (found != -1)
        printf("Element found at index: %d\n", found);
    else
        printf("Element not found\n");
    return 0;
}
