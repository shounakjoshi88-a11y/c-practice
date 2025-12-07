#include <stdio.h>

typedef struct {
    int (*add)(int, int);
    int (*sub)(int, int);
} Calculator;

int add_impl(int a, int b) { return a + b; }
int sub_impl(int a, int b) { return a - b; }

int main() {
    Calculator calc = {add_impl, sub_impl};
    printf("10 + 5 = %d\n", calc.add(10, 5));
    printf("10 - 5 = %d\n", calc.sub(10, 5));
    return 0;
}
