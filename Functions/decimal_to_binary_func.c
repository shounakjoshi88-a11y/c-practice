#include <stdio.h>

void decimalToBinary(int n) {
    if (n > 1) {
        decimalToBinary(n / 2);
    }
    printf("%d", n % 2);
}

int main() {
    printf("Binary of 10: ");
    decimalToBinary(10);
    printf("\n");
    return 0;
}
