#include <stdio.h>
#include <math.h>
int main() {
    long long n;
    int decimal = 0, i = 0, rem;
    printf("Enter a binary number: ");
    scanf("%lld", &n);
    while (n != 0) {
        rem = n % 10;
        n /= 10;
        decimal += rem * pow(2, i);
        ++i;
    }
    printf("Decimal: %d\n", decimal);
    return 0;
}
