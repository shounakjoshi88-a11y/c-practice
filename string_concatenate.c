#include <stdio.h>
#include <string.h>
int main() {
    char str1[50] = "Hello";
    char str2[50] = "World";
    strcat(str1, " ");
    strcat(str1, str2);
    printf("Concatenated: %s\n", str1);
    return 0;
}
