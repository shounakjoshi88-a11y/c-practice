#include <stdio.h>

int recursiveSum(int n) {
    if (n <= 0) {
        return 0;
    }
    return n + recursiveSum(n - 1);
}

int main() {
    printf("Sum of 1 to 10: %d\n", recursiveSum(10));
    return 0;
}
