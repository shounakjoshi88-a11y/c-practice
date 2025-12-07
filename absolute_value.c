#include <stdio.h>

int main() {
    int num, abs_val;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    abs_val = (num < 0) ? -num : num;
    
    printf("Absolute value of %d is: %d\n", num, abs_val);
    
    return 0;
}
