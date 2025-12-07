#include <stdio.h>

extern int externalGlobal;

void printExternal() {
    printf("External Global: %d\n", externalGlobal);
}

int main() {
    printExternal();
    return 0;
}
