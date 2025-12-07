#include <stdio.h>

int compareStrings(char* str1, char* str2) {
    int i = 0;
    while (str1[i] == str2[i] && str1[i] != '\0') {
        i++;
    }
    return str1[i] - str2[i];
}

int main() {
    printf("%d\n", compareStrings("abc", "abc"));
    return 0;
}
