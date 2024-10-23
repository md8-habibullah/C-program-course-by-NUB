// 5 Write a C program to convert specified days into years, weeks and days.
// Note: Ignore leap year.

// Test Data :
// Number of days : 1329
// Expected Output :
// Years: 3
// Weeks: 33
// Days: 3

// #######################################

#include <stdio.h>

int main() {
    int totalDays, years, weeks, days;

    printf("Enter the number of days: ");
    scanf("%d", &totalDays);

    years = totalDays / 365;
    totalDays = totalDays % 365;
    weeks = totalDays / 7;
    days = totalDays % 7;
    
    printf("Years: %d\n", years);
    printf("Weeks: %d\n", weeks);
    printf("Days: %d\n", days);

    return 0;
}
