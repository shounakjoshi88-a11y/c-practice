#include <stdio.h>
#include <stdlib.h>
int main() {
    FILE *fp;
    char ch;
    fp = fopen("test.txt", "r");
    if(fp == NULL) {
        printf("Error: Run file_write.c first to create the file!\n");
        exit(1);
    }
    printf("Contents of test.txt:\n");
    while((ch = fgetc(fp)) != EOF)
        printf("%c", ch);
    fclose(fp);
    return 0;
}
