#include<stdio.h>
static char *dayname[]={"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};

char *getdayname(int n)
{
    if(1>n || 7<n)
        return NULL;
    else
        return dayname[n-1];
}
int main()
{
    int n;
    printf("Enter the day number:\n");
    scanf("%d",&n);
    char *dayname=getdayname(n);
    if(dayname!=NULL)
        printf("The name of the day is %s\n",dayname);
    else
        printf("Invalid day number.");
    return 0;
}
