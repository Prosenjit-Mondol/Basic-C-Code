#include<stdio.h>
struct class
{
    int number;
    char name[30];
    float marks;
};
main()
{
    int x;
    struct class student1={2102049 , "Prosenjit" ,98.95};
    struct class student2={2102047 , "senjit" ,89.95};
    struct class student3;
    student3=student2;
    x=((student3.number==student2.number) && (student3.marks==student2.marks))?1:0;
    if(x==1)
    {
        printf("Student2 and student3 are same:\n");
        printf("%d  %s %f",student3.number,student3.name,student3.marks);

    }
    else

        printf("%d  %s %f",student1.number,student1.name,student1.marks);


}
