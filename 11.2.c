#include<stdio.h>
struct personal
{
    char name[50];
    int day;
    char month[30];
    int year;
    float salary;
};
main()
{
    struct personal person;

    printf("Input VAlues:\n");
    scanf("%s%d%s%d%f",person.name,&person.day,person.month,&person.year,&person.salary);

    printf("%s %d %s %d %\nf",person.name,person.day,person.month,person.year,person.salary);
}
