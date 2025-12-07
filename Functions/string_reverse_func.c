#include <stdio.h>
#include <string.h>

void reverseString(char* str) {
    int n = strlen(str);
    for (int i = n - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    printf("\n");
}

int main() {
    reverseString("Hello");
    return 0;
}
