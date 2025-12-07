#include <stdio.h>
#include <stdarg.h>

int sum_all(int count, ...) {
    va_list args;
    va_start(args, count);
    
    int sum = 0;
    for (int i = 0; i < count; i++) {
        sum += va_arg(args, int);
    }
    
    va_end(args);
    return sum;
}

int main() {
    printf("Sum of 3, 5, 7: %d\n", sum_all(3, 3, 5, 7));
    printf("Sum of 1, 2, 3, 4, 5: %d\n", sum_all(5, 1, 2, 3, 4, 5));
    return 0;
}
