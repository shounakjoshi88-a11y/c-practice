#include <stdio.h>

int recursiveProduct(int n) {
    if (n <= 1) {
        return 1;
    }
    return n * recursiveProduct(n - 1);
}

int main() {
    printf("Product of 1 to 5: %d\n", recursiveProduct(5));
    return 0;
}
