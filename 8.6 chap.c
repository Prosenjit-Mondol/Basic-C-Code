#include<stdio.h>
#define MAX 50
void main()
{
int a[MAX],b[MAX],c[MAX];
int i,ax,bx,cx,n,m,mn;
ax=bx=cx=0;
printf("Enter no. of elements of array : ");
scanf("%d %d",&n,&m);
printf("Enter elements of first array :\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("Enter elements of Second array :");
for(i=0;i<m;i++)
scanf("%d",&b[i]);
mn=m+n;
while(ax<n && bx<m)
{
if(a[ax]<b[bx])
{
c[cx]=a[ax];
ax++;
}
else
{
c[cx]=b[bx];
bx++;
}
cx++;
}
if(ax==n)
{
while(bx<m)
{
c[cx]=b[bx];
bx++;
cx++;
}
}
else
{
while(ax<n)
{
c[cx]=a[ax];
ax++;
cx++;
}
}
printf("the sorted array is : \n");
for(i=0;i<mn;i++)
printf("%d ",c[i]);
return 0;
}
