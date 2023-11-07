#include<stdio.h>
int main()
{
int Temp[2][2];
int i,j,City1,City2,MaxTemp,MinTemp;
printf("Enter temperature:--\n\n");
for(i=0;i<2;i++)
{
printf("For City %d ->\n",i+1);
for(j=0;j<2;j++)
{
printf("For Day %d ->",j+1);
scanf("%d",&Temp[i][j]);
}
}
printf("Temperature Matix :--- \n");
printf(" City \n ");
for(i=0;i<2;i++)
printf("%d ",i+1);
printf("\n Day\n");
for(i=0;i<2;i++)
{
printf(" %d ",i+1);
for(j=0;j<2;j++)
{
printf(" %d",Temp[i][j]);
}
printf("\n");
}
MinTemp=MaxTemp=Temp[0][0];
City1=0;
City2=0;
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
if(MaxTemp<Temp[i][j])
{
MaxTemp=Temp[i][j];
City1=j+1;
}
if(MinTemp>Temp[i][j])
{
MinTemp=Temp[i][j];
City2=j+1;
}
}
}
printf("\n\nHighest Temperature of City %d is %d\n",City1,MaxTemp);
printf("Lowest Temperature of City %d is %d\n",City2,MinTemp);
return 0;
}
