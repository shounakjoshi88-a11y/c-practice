#include <stdio.h>
#include <stdlib.h>
int main() {
    int r = 3, c = 4, i, j, count = 0;
    int **arr = (int **)malloc(r * sizeof(int *));
    for (i = 0; i < r; i++)
        arr[i] = (int *)malloc(c * sizeof(int));
    // Fill array
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            arr[i][j] = ++count;
    // Print array
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++)
            printf("%d ", arr[i][j]);
        printf("\n");
    }
    return 0;
}
