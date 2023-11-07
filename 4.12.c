#include<stdio.h>
main()
{
    int a,b,c,x,z,w;
    float y;
     printf("PROSENJIT MONDOL\n");
    scanf("%d%d%d",&a,&b,&c);
    x=a+b+c;
    y=(float)x/3;
    z=(a>b)?((a>c)?(a):(c)):((b>c)?(b):(c));
    w=(a<b)?((a<c)?(a):(c)):((b<c)?(b):(c));
    printf("Sum of the values %d\n",x);
    printf("Average of the values %f\n",y);
    printf("Largest of the values %d\n",z);
    printf("Smallest of the three values %d\n",w);
}
