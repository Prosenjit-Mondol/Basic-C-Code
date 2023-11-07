#include<stdio.h>
int main()
{
    int max,min,c=0,n,i,j,a[10000];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    if(n<2)
    {
    	printf("0\n");
    	return 0;
    }
    max=a[0];
    min=max;
    for(j=1;j<n;j++)
    {

        if(a[j]<min){
            min=a[j];
            c++;
        }
        else if(max<a[j])
        {
        	max=a[j];
           c++;
        }
    }
    printf("%d\n",c);
    return 0;
}
