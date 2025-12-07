#include <stdio.h>

void decimalToHex(int n) {
    if (n == 0) return;
    
    decimalToHex(n / 16);
    int digit = n % 16;
    
    if (digit < 10) {
        printf("%d", digit);
    } else {
        printf("%c", 'A' + digit - 10);
    }
}

int main() {
    printf("Hexadecimal of 255: ");
    decimalToHex(255);
    printf("\n");
    return 0;
}
