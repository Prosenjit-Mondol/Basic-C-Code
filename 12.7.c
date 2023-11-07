#include<stdio.h>
#include<string.h>
void swap(char **a,char **b)
{
    char *temp=*a;
    *a=*b;
    *b=temp;
}
int strcmp(const char *a,const char *b)
{
    return strcmp(a,b);
}
void sort(char **names,int n,int (*cmp)(const char *,const char *))
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(cmp(names[i],names[j])>0)
            {
                swap(&names[i],&names[j]);
            }
        }
    }
}
int main()
{
    char *names[]={"Prosenjit","Saikat","Maloti","Paresh"};
    int n=sizeof(names);
    sort(names,n,strcmp);
    for(int i=0;i<n;i++)
    {
        printf("%s ",names[i]);
    }
    printf("\n");
    return 0;
}
