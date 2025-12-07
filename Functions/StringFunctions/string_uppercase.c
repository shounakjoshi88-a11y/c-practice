#include <stdio.h>
#include type.h>

void toUpperCase(char* str) {
    for (int i = 0; str[i] != '\0'; i++) {
        str[i] = toupper(str[i]);
    }
}

int main() {
    char str[] = "hello world";
    toUpperCase(str);
    printf("%s\n", str);
    return 0;
}
