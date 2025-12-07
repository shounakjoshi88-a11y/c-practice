#include <stdio.h>
#include <stdlib.h>
int main() {
    FILE *source, *target;
    char ch;
    source = fopen("test.txt", "r");
    target = fopen("test_copy.txt", "w");
    if(source == NULL || target == NULL) {
        printf("File error!\n");
        exit(1);
    }
    while((ch = fgetc(source)) != EOF)
        fputc(ch, target);
    printf("File copied successfully to test_copy.txt\n");
    fclose(source);
    fclose(target);
    return 0;
}
