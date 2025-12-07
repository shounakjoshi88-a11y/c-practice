#include <stdio.h>
#include <math.h>

int octalToDecimal(int octal) {
    int decimal = 0;
    int power = 0;
    
    while (octal > 0) {
        decimal += (octal % 10) * pow(8, power);
        octal /= 10;
        power++;
    }
    return decimal;
}

int main() {
    printf("Decimal of octal 12: %d\n", octalToDecimal(12));
    return 0;
}
