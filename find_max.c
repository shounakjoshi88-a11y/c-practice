#include <stdio.h>
int main() {
    int a = 5, b = 15, c = 10;
    int max = (a > b) ? (a > c ? a : c) : (b > c ? b : c);
    printf("Max: %d\n", max);
    return 0;
}
