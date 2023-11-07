#include<stdio.h>
#include<string.h>
int main()
{
    char nam1[10],nam2[10];
    int code1,code2;
    float price1,price2;
    printf("Enter name code and price\n");
    scanf("%s%d%f",&nam1,&code1,&price1);
    printf("Enter name code and price\n");
    scanf("%s%d%f",&nam2,&code2,&price2);
    printf("Name   Code   Price\n");
    printf("%s     %d    %.2f\n",nam1,code1,price1);
    printf("%s     %d    %.2f\n",nam2,code2,price2);
    return 0;
}
