#include<stdio.h>
int main()
{
    int s=0,a,c=0,min,max;
    double ave;
    scanf("%d",&a);
    if(a<=0){
        printf("No positive number entered\n");
        return 0;
    }
       max=a;
       min=a;
       while(a>0)
       {
           s+=a;
           c++;
           max=a>max?a:max;
           min=(a<min)?a:min;
           printf("enter next positive num\n");
           scanf("%d",&a);
       }
       ave=s/(double)c;
       printf("Maximum valu is %d\n",max);
       printf("Minimum valu is %d\n",min);
       printf("Average valu is %.4lf\n",ave);
       return 0;
}
