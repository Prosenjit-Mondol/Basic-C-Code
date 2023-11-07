#include <stdio.h>
int main()
{
    char str[100];
    int i, j = 0;
    printf("Enter String to Remove White Spaces = ");
    gets(str);
    printf("String before Removing Empty Spaces = %s\n", str);
    for(i = 0; str[i] != '\0'; i++)
    {
        str[i] = str[i + j];
        if(str[i] == ' ' || str[i] == '\t')
        {
            j++;
            i--;
        }
    }
    printf("String after Removing Empty Spaces  = %s\n", str);
   return 0;
}
