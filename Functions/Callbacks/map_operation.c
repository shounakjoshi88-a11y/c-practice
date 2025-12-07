#include <stdio.h>

void apply_to_array(int arr[], int size, int (*transform)(int)) {
    for (int i = 0; i < size; i++) {
        printf("%d ", transform(arr[i]));
    }
    printf("\n");
}

int square(int x) { return x * x; }
int double_val(int x) { return x * 2; }

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    printf("Squared: ");
    apply_to_array(arr, 5, square);
    printf("Doubled: ");
    apply_to_array(arr, 5, double_val);
    return 0;
}
