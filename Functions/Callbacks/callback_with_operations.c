#include <stdio.h>

int add(int a, int b) { return a + b; }
int subtract(int a, int b) { return a - b; }
int multiply(int a, int b) { return a * b; }

int perform_operation(int (*op)(int, int), int x, int y) {
    return op(x, y);
}

int main() {
    printf("Add: %d\n", perform_operation(add, 10, 5));
    printf("Subtract: %d\n", perform_operation(subtract, 10, 5));
    printf("Multiply: %d\n", perform_operation(multiply, 10, 5));
    return 0;
}
