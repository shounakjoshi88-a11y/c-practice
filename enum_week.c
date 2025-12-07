#include <stdio.h>
enum week {Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday};
int main() {
    enum week today;
    today = Wednesday;
    printf("Day %d of the week (0=Sunday)\n", today);
    return 0;
}
