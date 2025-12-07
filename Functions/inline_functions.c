#include <stdio.h>

inline int square(int x) {
    return x * x;
}

inline int cube(int x) {
    return x * x * x;
}

int main() {
    printf("Square of 5: %d\n", square(5));
    printf("Cube of 5: %d\n", cube(5));
    return 0;
}
