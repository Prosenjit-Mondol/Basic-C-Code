#include<stdio.h>
int main()
{
int i,vote[5],c1=0,c2=0,c3=0,c4=0,c5=0,count=0,count_sp=0;
printf("Enter your votes for 5 candidates:");
for(i=1;i<=5;i++)
{
scanf("%d",&vote[i]);
}
for(i=1;i<=5;i++)
{
if(vote[i]==1)
c1+=1;
if(vote[i]==2)
c2=c2+1;
if(vote[i]==3)
c3=c3+1;
if(vote[i]==4)
c4=c4+1;
if(vote[i]==5)
c5=c5+1;
}
printf(" votes to candidate1=%d",c1);
printf(" \nvotes to candidate2=%d",c2);
printf("\n votes to candidate3=%d",c3);
printf(" \nvotes to candidate4=%d",c4);
printf(" \nvotes to candidate5=%d",c5);
for(i=1;i<=5;i++)
{
if(vote[i]<=5)
count=count+1;
else
count_sp=count_sp+1;
}
printf(" The number of valid votes is:%d",count);
printf(" \nThe number of spoilt votes is:%d",count_sp);
return 0;
}
