#include <stdio.h>

typedef int (*MathOp)(int, int);

int add(int a, int b) { return a + b; }
int multiply(int a, int b) { return a * b; }

void execute_operation(MathOp op, int x, int y) {
    printf("Result: %d\n", op(x, y));
}

int main() {
    execute_operation(add, 10, 5);
    execute_operation(multiply, 10, 5);
    return 0;
}
