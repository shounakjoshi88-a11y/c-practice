#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int main() {
    int (*funcPtr)(int, int);
    
    funcPtr = &add;
    printf("Add: %d\n", funcPtr(10, 5));
    
    funcPtr = &subtract;
    printf("Subtract: %d\n", funcPtr(10, 5));
    
    return 0;
}
