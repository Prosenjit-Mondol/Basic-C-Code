#include<stdio.h>
int main()
{
int A[5][5];
int a,i,k,j;
a=3;
for(i=0;i<=3;i++)
{
for(j=0;j<=a;j++)
{
A[i][j]=+1;
}
a--;
}
j=4;
for(i=0;i<=4;i++)
{
A[i][j]=0;
j--;
}
a=4;
for(i=1;i<=4;i++)
{
for(j=4;j>=a;j--)
{
A[i][j]=-1;
}
a--;
}
printf("Array is:--\n\n");
for(i=0;i<=4;i++)
{
for(j=0;j<=4;j++)
printf(" %d ",A[i][j]);
printf("\n");
}
return 0;
}
