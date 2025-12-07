#include <stdio.h>
#define PI 3.14159
#define SQUARE(x) ((x) * (x))
#define MAX(a,b) ((a) > (b) ? (a) : (b))
int main() {
    int num = 5, a = 10, b = 20;
    printf("PI: %.5f\n", PI);
    printf("Square of %d: %d\n", num, SQUARE(num));
    printf("Max of %d and %d: %d\n", a, b, MAX(a, b));
    return 0;
}
