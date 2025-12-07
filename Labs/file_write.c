#include <stdio.h>
#include <stdlib.h>
int main() {
    FILE *fp;
    fp = fopen("test.txt", "w");
    if(fp == NULL) {
        printf("Error opening file!");
        exit(1);
    }
    fprintf(fp, "This is a line of text written by C program.\n");
    fprintf(fp, "File handling is easy!\n");
    fclose(fp);
    printf("Data written to test.txt\n");
    return 0;
}
