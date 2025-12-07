#include <stdio.h>

int main() {
    FILE* file = fopen("output.txt", "w");
    if (file == NULL) {
        printf("Error opening file\n");
        return 1;
    }
    
    fprintf(file, "Hello, File I/O!\n");
    fprintf(file, "This is line 2\n");
    
    fclose(file);
    printf("File written successfully\n");
    return 0;
}
