#include <stdio.h>
#include <math.h>

int countDigits(int n) {
    int count = 0;
    while (n > 0) {
        count++;
        n /= 10;
    }
    return count;
}

int isArmstrong(int n) {
    int temp = n;
    int digits = countDigits(n);
    int sum = 0;
    
    while (temp > 0) {
        int digit = temp % 10;
        sum += pow(digit, digits);
        temp /= 10;
    }
    return sum == n;
}

int main() {
    printf("%s\n", isArmstrong(153) ? "Armstrong" : "Not Armstrong");
    return 0;
}
