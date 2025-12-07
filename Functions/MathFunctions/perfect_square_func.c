#include <stdio.h>
#include <math.h>

int isPerfectSquare(int n) {
    if (n < 0) return 0;
    int root = sqrt(n);
    return root * root == n;
}

int main() {
    printf("%s\n", isPerfectSquare(36) ? "Perfect Square" : "Not Perfect Square");
    return 0;
}
