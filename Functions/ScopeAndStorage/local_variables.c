#include <stdio.h>

void funcA() {
    int localVar = 50;
    printf("Local in funcA: %d\n", localVar);
}

void funcB() {
    int localVar = 100;
    printf("Local in funcB: %d\n", localVar);
}

int main() {
    funcA();
    funcB();
    return 0;
}
