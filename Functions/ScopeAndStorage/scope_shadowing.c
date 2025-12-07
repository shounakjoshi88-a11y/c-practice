#include <stdio.h>

int value = 100;

int main() {
    {
        int value = 50;
        printf("Inner scope value: %d\n", value);
    }
    printf("Outer scope value: %d\n", value);
    return 0;
}
