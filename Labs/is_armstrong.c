#include <stdio.h>
#include <math.h>
int main() {
    int num = 153, original = num, sum = 0, digits = 0;
    while (original > 0) {
        digits++;
        original /= 10;
    }
    original = num;
    while (original > 0) {
        sum += pow(original % 10, digits);
        original /= 10;
    }
    if (sum == num)
        printf("%d is Armstrong\n", num);
    else
        printf("%d is not Armstrong\n", num);
    return 0;
}
