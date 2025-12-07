#include <stdio.h>

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

int main() {
    printf("GCD of 48 and 18: %d\n", gcd(48, 18));
    return 0;
}
