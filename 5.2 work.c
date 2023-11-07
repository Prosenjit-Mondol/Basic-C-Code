#include<stdio.h>
int main()
{
    char c;
    int l=1,d=1;
    printf("Press any key:");
    while(c!='\n')
    {
        c = getchar();
        if (isalpha(c)>0){
            printf("The character iS a letter.\n");
            l++;
        }
        else if (isdigit(c)>0){
            printf("The character iS a digit.\n");
            d++;
        }
        else{
            printf("The character is not a alphanumeric.\n");
        }
    }
     printf("Total character =%d\nTotal digit =%d",l,d);
    return 0;
}
