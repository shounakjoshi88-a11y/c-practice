#include <stdio.h>
#include type.h>

void toLowerCase(char* str) {
    for (int i = 0; str[i] != '\0'; i++) {
        str[i] = tolower(str[i]);
    }
}

int main() {
    char str[] = "HELLO WORLD";
    toLowerCase(str);
    printf("%s\n", str);
    return 0;
}
