#include<stdio.h>
struct marks
{
    int sub1;
    int sub2;
    int sub3;
    int total;
};

int main()
{
    int i;
    struct marks student[3]={{58,98,86},{45,88,47},{85,74,85}};
    struct marks total;
    for(i=0;i<3;i++)
    {
        student[i].total=student[i].sub1 + student[i].sub2 + student[i].sub3;
        total.sub1+=student[i].sub1;
        total.sub2+=student[i].sub2;
        total.sub3+=student[i].sub3;
        total.total+=student[i].total;
    }
    printf("STUDENT        TOTAL\n");
    for(i=0;i<3;i++)
    {
        printf("Student[%d]      %d\n",i+1,student[i].total);
    }

    printf("STUDENT           TOTAL\n");
    printf("%s      %d\n%s      %d\n%s      %d\n","Subject1    ",total.sub1,"Subject2    ",total.sub2,"Subject3    ",total.sub3);
    printf("\n Grand Total = %d\n",total.total);
    return 0;
}
