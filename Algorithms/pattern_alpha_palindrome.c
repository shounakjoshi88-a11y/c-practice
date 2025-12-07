#include <stdio.h>
int main() {
    int n = 5;
    for(int i=0; i<n; i++) {
        for(int j=0; j<n-i-1; j++) printf(" ");
        char ch = 'A';
        for(int j=0; j<=i; j++) printf("%c", ch++);
        ch -= 2;
        for(int j=0; j<i; j++) printf("%c", ch--);
        printf("\n");
    }
    return 0;
}
