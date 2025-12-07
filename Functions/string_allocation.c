#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char* str = (char*)malloc(50 * sizeof(char));
    strcpy(str, "Hello, Dynamic Memory!");
    printf("%s\n", str);
    free(str);
    return 0;
}
