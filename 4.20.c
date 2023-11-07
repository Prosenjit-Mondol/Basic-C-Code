#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the sides of triangle :");
    scanf("%d%d%d",&a,&b,&c);
    if((a==b&&a!=c)||(b==c&&a!=b)||(c==a&&b!=c)){
        printf("The tringle is isoceles\n");
    }
    else{
        printf("The tringle is not isoceles\n");
    }
    return 0;
}
