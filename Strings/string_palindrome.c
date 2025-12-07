#include <stdio.h>
#include <string.h>
int main() {
    char str[50];
    printf("Enter a string: ");
    scanf("%s", str);
    int n = strlen(str);
    int isPalindrome = 1;
    for (int i = 0; i < n / 2; i++) {
        if (str[i] != str[n - 1 - i]) {
            isPalindrome = 0;
            break;
        }
    }
    if (isPalindrome)
        printf("%s is a Palindrome\n", str);
    else
        printf("%s is not a Palindrome\n", str);
    return 0;
}
