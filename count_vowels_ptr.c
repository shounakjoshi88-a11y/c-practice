#include <stdio.h>
int main() {
    char str[100];
    char *ptr;
    int count = 0;
    printf("Enter string: ");
    fgets(str, sizeof(str), stdin);
    ptr = str;
    while(*ptr != '\0') {
        if(*ptr=='A' || *ptr=='E' || *ptr=='I' || *ptr=='O' || *ptr=='U' ||
           *ptr=='a' || *ptr=='e' || *ptr=='i' || *ptr=='o' || *ptr=='u')
            count++;
        ptr++;
    }
    printf("Number of vowels: %d\n", count);
    return 0;
}
