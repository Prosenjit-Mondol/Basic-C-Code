#include<stdio.h>
int main()
{
    int x,z,i,s=0,j=0;
        scanf("%d",&x);
        while(1)
        {
            scanf("%d",&z);
            if(z>x)
                break;
        }
        for(i=x; ; i++)
        {
            s+=i;
            j++;
            if(s>z)
            {
                break;
            }
        }
        printf("%d\n",j);
    return 0;
}
