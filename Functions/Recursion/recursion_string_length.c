#include <stdio.h>

int stringLength(char* str) {
    if (*str == '\0') {
        return 0;
    }
    return 1 + stringLength(str + 1);
}

int main() {
    printf("Length: %d\n", stringLength("Hello"));
    return 0;
}
