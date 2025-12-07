#include <stdio.h>

int factorial_tail(int n, int acc) {
    if (n <= 1) {
        return acc;
    }
    return factorial_tail(n - 1, n * acc);
}

int main() {
    printf("Factorial of 5: %d\n", factorial_tail(5, 1));
    printf("Factorial of 10: %d\n", factorial_tail(10, 1));
    return 0;
}
