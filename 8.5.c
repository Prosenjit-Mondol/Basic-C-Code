#include<stdio.h>
#define MAX 10
int main()
{
    int i,roll=0,m1,m2,m3,sub1[10],sub2[10],sub3[10],max,max1,max2,max3,roll1=0,roll2=0,roll3=0;
    int t_sub1=0,t_sub2=0,t_sub3=0,t[10];
    printf("Enter the marks for subject 1 of all students:\n");
    for(i=0;i<MAX;i++){
        scanf("%d",&sub1[i]);
        t_sub1+=sub1[i];
    }
    printf("Enter the marks for subject 2 of all students:\n");
    for(i=0;i<MAX;i++){
        scanf("%d",&sub2[i]);
        t_sub2+=sub2[i];
    }
    printf("Enter the marks for subject 3 of all students:\n");
    for(i=0;i<MAX;i++){
        scanf("%d",&sub3[i]);
        t_sub3+=sub3[i];
        t[i]=sub1[i]+sub2[i]+sub3[i];
    }
    max1=sub1[0];
    max2=sub2[0];
    max3=sub3[0];
    max=t[0];
    for(i=0;i<MAX;i++)
    {
      printf("The total marks obtained by the student%d is =%d\n",i+1,t[i]);
    }
    for(i=0;i<MAX;i++)
    {
        if(max1<sub1[i])
        {
         max1=sub1[i];
         roll1=i+1;
        }
        if(max2<sub2[i])
        {
         max2=sub2[i];
         roll2=i+1;
        }
        if(max3<sub3[i])
        {
         max3=sub3[i];
        roll3=i+1;
        }
        if(max<t[i])
        {
         max=t[i];
         roll=i+1;
         }
      }
     printf("\nThe highest marks in subject1 is %d and the roll number is %d",max1,roll1);
     printf("\nThe highest marks in subject2 is %d and the roll number is %d",max2,roll2);
     printf("\nThe highest marks in subject3 is %d and the roll number is %d",max3,roll3);
     printf("\n The highest total marks is %d and the roll number is %d ",max,roll);
     return 0;
}
