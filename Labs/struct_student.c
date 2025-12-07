#include <stdio.h>
struct Student {
    char name[50];
    int roll;
    float marks;
} s;
int main() {
    printf("Enter information:\n");
    printf("Enter name: ");
    scanf("%s", s.name);
    printf("Enter roll number: ");
    scanf("%d", &s.roll);
    printf("Enter marks: ");
    scanf("%f", &s.marks);
    printf("\nDisplaying Information:\n");
    printf("Name: %s\nRoll: %d\nMarks: %.1f\n", s.name, s.roll, s.marks);
    return 0;
}
