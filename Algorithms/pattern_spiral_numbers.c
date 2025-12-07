#include <stdio.h>
int main() {
    int n = 4;
    int size = 2 * n - 1;
    for(int i=0; i<size; i++) {
        for(int j=0; j<size; j++) {
            int top = i;
            int left = j;
            int right = size - 1 - j;
            int bottom = size - 1 - i;
            int min = top < left ? top : left;
            min = min < right ? min : right;
            min = min < bottom ? min : bottom;
            printf("%d ", n - min);
        }
        printf("\n");
    }
    return 0;
}
