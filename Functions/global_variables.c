#include <stdio.h>

int globalVar = 100;

void incrementGlobal() {
    globalVar += 10;
}

int main() {
    printf("Global before: %d\n", globalVar);
    incrementGlobal();
    printf("Global after: %d\n", globalVar);
    return 0;
}
