#include <stdio.h>
#include <math.h>

int binaryToDecimal(int binary) {
    int decimal = 0;
    int power = 0;
    
    while (binary > 0) {
        decimal += (binary % 10) * pow(2, power);
        binary /= 10;
        power++;
    }
    return decimal;
}

int main() {
    printf("Decimal of 1010: %d\n", binaryToDecimal(1010));
    return 0;
}
