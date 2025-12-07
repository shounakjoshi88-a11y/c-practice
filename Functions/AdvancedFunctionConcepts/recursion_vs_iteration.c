#include <stdio.h>
#include <time.h>

int recursiveFactorial(int n) {
    if (n <= 1) return 1;
    return n * recursiveFactorial(n - 1);
}

int iterativeFactorial(int n) {
    int result = 1;
    for (int i = 2; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main() {
    printf("Recursive: %d\n", recursiveFactorial(5));
    printf("Iterative: %d\n", iterativeFactorial(5));
    return 0;
}
