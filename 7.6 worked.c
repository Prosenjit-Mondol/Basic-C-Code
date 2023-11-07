#include<stdio.h>
#define first 360
#define second 240
int main()
{
    int n,m,i,j,roll,marks,total;
    printf("Enter number of the students and subjects\n\n");
    scanf("%d%d",&n,&m);
    for(i=1;i<=n;i++)
    {
        printf("Enter roll number:");
        scanf("%d",&roll);
        total=0;
        printf("Enter marks of %d subjects for roll no %d\n",m,roll);
        for(j=1;j<=m;j++)
        {
            scanf("%d",&marks);
            total=total+marks;
        }
        printf("TOTAL MARKS =%d\n",total);
        if(total>=first)
            printf("(FIRST DIVISSION)\n\n");
        else if(total>=second)
            printf("(SECOND DIVISSION)\n\n");
        else
            printf("** FAIL**\n\n");
    }
    return 0;
}
