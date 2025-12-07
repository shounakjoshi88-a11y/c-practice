#include <stdio.h>
#include <stdlib.h>
int main() {
    printf("Demonstrating proper memory cleanup...\n");
    int *ptr = (int*) malloc(sizeof(int) * 10);
    if (ptr == NULL) return 1;
    // Using memory...
    for(int i=0; i<10; i++) ptr[i] = i; 
    // Always free dynamically allocated memory!
    free(ptr); 
    ptr = NULL; // Good practice to avoid dangling pointers
    printf("Memory freed successfully.\n");
    return 0;
}
