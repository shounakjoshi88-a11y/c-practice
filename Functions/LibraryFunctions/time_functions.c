#include <stdio.h>
#include <time.h>

int main() {
    time_t now = time(NULL);
    printf("Current time (seconds since epoch): %ld\n", now);
    
    struct tm* timeInfo = localtime(&now);
    printf("Current date: %d-%d-%d\n", 
           timeInfo->tm_year + 1900, 
           timeInfo->tm_mon + 1, 
           timeInfo->tm_mday);
    return 0;
}
