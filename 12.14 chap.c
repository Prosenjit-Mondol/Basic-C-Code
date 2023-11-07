#include<stdio.h>
struct student
{
    int id;
    char name[20];
    float cgpa;
};
int main()
{
    struct student *ptr;;
    ptr=malloc(sizeof(struct student));
    ptr->id=2102049;
    strcpy(ptr->name,"Prosenjit Mondol");
    ptr->cgpa=4.00;

    printf("The id of the student is: %d\n", ptr->id);
    printf("The name of the student is: %s\n", ptr->name);
    printf("The cgpa of the student is: %f\n", ptr->cgpa);

    //free(ptr);

    return 0;
}
