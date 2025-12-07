#include <stdio.h>
int main() {
    int x = 10, y = 5;
    printf("Before Swap: x=%d, y=%d\n", x, y);
    // Swap using XOR (no temp variable needed)
    x = x ^ y;
    y = x ^ y;
    x = x ^ y;
    printf("After Swap: x=%d, y=%d\n", x, y);
    return 0;
}
