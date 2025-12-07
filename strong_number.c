#include <stdio.h>
int factorial(int n) {
    int fact = 1;
    for(int i = 1; i <= n; i++) fact *= i;
    return fact;
}
int main() {
    int n, sum = 0, temp, rem;
    printf("Enter a number: ");
    scanf("%d", &n);
    temp = n;
    while(temp > 0) {
        rem = temp % 10;
        sum += factorial(rem);
        temp /= 10;
    }
    if(sum == n) printf("%d is a Strong Number\n", n);
    else printf("%d is Not Strong\n", n);
    return 0;
}
