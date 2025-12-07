#include <stdio.h>

int main() {
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        printf("%d is Leap Year\n", year);
    else#include <stdio.h>

int main() {
    int marks;
    printf("Enter marks: ");
    scanf("%d", &marks);
    if (marks >= 90) printf("Grade: A\n");
    else if (marks >= 80) printf("Grade: B\n");
    else if (marks >= 70) printf("Grade: C\n");
    else if (marks >= 60) printf("Grade: D\n");
    else printf("Grade: F\n");
    return 0;
}
        printf("%d is not Leap Year\n", year);
    return 0;
}
