/*#include<stdio.h>
int main()
{
    int i=0,j,n;
    scanf("%d",&n);
    if(2<=n&&n<=50)
    {
        while(i<1000)
        {
            for(j=0;j<n;j++)
            {
                printf("N[%d] = %d\n",i,j);
                i++;
            }
        }
    }
    return 0;
}*/
#include <stdio.h>
int main()
{
    int N[1000], x, y,z;
    scanf ("%d", &x);
    for(y=0,z=0; y<=1000; y++)
    {
        printf("N[%d] = %d\n",y,z);
        z++;
        if(z==x)
            z=0;
    }
    return 0;
}
