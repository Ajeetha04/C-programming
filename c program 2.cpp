#include <stdio.h>

int main() {
    int totalDays, years, weeks, days;

    printf("Enter the total number of days: ");
    scanf("%d", &totalDays);

    years = totalDays / 365;
    weeks = (totalDays % 365) / 7;
    days = (totalDays % 365) % 7;

    printf("Number of Years: %d\n", years);
    printf("Number of Weeks: %d\n", weeks);
    printf("Number of Days: %d\n", days);

    return 0;
}


