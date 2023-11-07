#include<stdio.h>
int main()
{
    int n;
    long long int l;
    char ch;
    float f;
    long double b;
    scanf("%d %lld %c %f %llf",&n,&l,&ch,&f,&b);
    printf("%d\n%lld\n%c\n%.2f\n%.1llf",n,l,ch,f,b);
    return 0;
}
