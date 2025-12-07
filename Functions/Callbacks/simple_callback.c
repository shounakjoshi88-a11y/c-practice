#include <stdio.h>

void greet(char* name) {
    printf("Hello, %s!\n", name);
}

void execute_callback(void (*callback)(char*), char* param) {
    callback(param);
}

int main() {
    execute_callback(greet, "Alice");
    return 0;
}
