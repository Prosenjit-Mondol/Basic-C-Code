#include <stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int i, caps = 0, smalls = 0;
    printf("Enter a string: ");
    scanf("%s",&str[i]);
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            caps++;
        }
        else if (str[i] >= 'a' && str[i] <= 'z') {
            smalls++;
        }
    }
    printf("Number of capital letters: %d\n", caps);
    printf("Number of small letters: %d\n", smalls);
    return 0;
}
