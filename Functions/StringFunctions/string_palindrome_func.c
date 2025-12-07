#include <stdio.h>
#include <string.h>

int isPalindrome(char* str) {
    int n = strlen(str);
    for (int i = 0; i < n / 2; i++) {
        if (str[i] != str[n - 1 - i]) {
            return 0;
        }
    }
    return 1;
}

int main() {
    printf("%s\n", isPalindrome("racecar") ? "Palindrome" : "Not palindrome");
    return 0;
}
