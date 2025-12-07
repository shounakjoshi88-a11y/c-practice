#include <stdio.h>
typedef struct complex {
    float real;
    float imag;
} complex;
complex add(complex n1, complex n2) {
    complex temp;
    temp.real = n1.real + n2.real;
    temp.imag = n1.imag + n2.imag;
    return temp;
}
int main() {
    complex n1, n2, result;
    n1.real = 2.5; n1.imag = 5.0;
    n2.real = 1.2; n2.imag = 3.4;
    result = add(n1, n2);
    printf("Sum = %.1f + %.1fi\n", result.real, result.imag);
    return 0;
}
