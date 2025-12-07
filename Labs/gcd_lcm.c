#include <stdio.h>
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int main() {
    int a = 12, b = 18;
    int g = gcd(a, b);
    int l = (a * b) / g;
    printf("GCD: %d, LCM: %d\n", g, l);
    return 0;
}
