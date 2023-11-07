#include <stdio.h>
#include <string.h>
int main()
{
    char month[10];
    int days = 0;
    printf("Enter the name of the month: ");
    scanf("%s", month);
    for (int i = 0; month[i]; i++) {
        month[i] = tolower(month[i]);
    }
    switch (month[0]) {
        case 'j':
            if (strcmp(month, "january") == 0 || strcmp(month, "july") == 0) {
                days = 31;
            } else if (strcmp(month, "june") == 0) {
                days = 30;
            } else {
                days = 0;
            }
            break;
        case 'f':
            if (strcmp(month, "february") == 0) {
                days = 28;
            } else {
                days = 0;
            }
            break;
        case 'm':
            if (strcmp(month, "march") == 0) {
                days = 31;
            } else if (strcmp(month, "may") == 0) {
                days = 31;
            } else {
                days = 0;
            }
            break;
        case 'a':
            if (strcmp(month, "august") == 0) {
                days = 31;
            } else if (strcmp(month, "april") == 0) {
                days = 30;
            } else {
                days = 0;
            }
            break;
        case 's':
            if (strcmp(month, "september") == 0) {
                days = 30;
            } else {
                days = 0;
            }
            break;
        case 'o':
            if (strcmp(month, "october") == 0) {
                days = 31;
            } else {
                days = 0;
            }
            break;
        case 'n':
            if (strcmp(month, "november") == 0) {
                days = 30;
            } else {
                days = 0;
            }
            break;
        case 'd':
            if (strcmp(month, "december") == 0) {
                days = 31;
            } else {
                days = 0;
            }
            break;
        default:
            printf("Invalid input\n");
            return 0;
    }
    printf("%s has %d days\n", month, days);

    return 0;
}
