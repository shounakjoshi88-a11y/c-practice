#include <stdio.h>
#include <string.h>
int main() {
    char s1[] = "listen";
    char s2[] = "silent";
    int n1 = strlen(s1);
    int n2 = strlen(s2);
    if(n1 != n2) {
        printf("Not Anagrams\n");
        return 0;
    }
    // Simple ASCII sum check (Warning: not perfect for all cases but good for basic logic)
    // A better way is sorting both or frequency arrays
    int count1[256] = {0}, count2[256] = {0};
    for(int i = 0; s1[i] && s2[i]; i++) {
        count1[s1[i]]++;
        count2[s2[i]]++;
    }
    for(int i = 0; i < 256; i++) {
        if(count1[i] != count2[i]) {
            printf("Not Anagrams\n");
            return 0;
        }
    }
    printf("Strings are Anagrams\n");
    return 0;
}
