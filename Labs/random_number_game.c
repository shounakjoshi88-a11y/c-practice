#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    int number, guess, attempts = 0;
    srand(time(0)); // Seed random number generator
    number = rand() % 100 + 1; // Random number between 1 and 100
    printf("Guess the number (1 to 100):\n");
    do {
        scanf("%d", &guess);
        attempts++;
        if (guess > number) printf("Lower!\n");
        else if (guess < number) printf("Higher!\n");
        else printf("Correct! You took %d attempts.\n", attempts);
    } while (guess != number);
    return 0;
}
