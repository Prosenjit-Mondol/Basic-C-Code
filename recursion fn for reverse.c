#include<stdio.h>
int main()
{
    printf("Enter a sentence:\n");
    reversesentence();
    return 0;
}
void reversesentence()
{
    char c;
    scanf("%c",&c);
    if(c != '\n')
    {
        reversesentence();
        printf("%c",c);
    }
}
