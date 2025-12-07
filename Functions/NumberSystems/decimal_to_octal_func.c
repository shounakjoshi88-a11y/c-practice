#include <stdio.h>

void decimalToOctal(int n) {
    if (n > 0) {
        decimalToOctal(n / 8);
        printf("%d", n % 8);
    }
}

int main() {
    printf("Octal of 10: ");
    decimalToOctal(10);
    printf("\n");
    return 0;
}
