#include <stdio.h>
#include <string.h>

int memo[100] = {-1};

int fib_memo(int n) {
    if (n <= 1) return n;
    if (memo[n] != -1) return memo[n];
    
    memo[n] = fib_memo(n - 1) + fib_memo(n - 2);
    return memo[n];
}

int main() {
    memset(memo, -1, sizeof(memo));
    printf("Fib(10): %d\n", fib_memo(10));
    printf("Fib(20): %d\n", fib_memo(20));
    return 0;
}
