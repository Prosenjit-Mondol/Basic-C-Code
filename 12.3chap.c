#include<stdio.h>
void  insertvalue(int *arr,int *size,int value)
{
    int *p=arr;
    int i=0;
    while(i<*size && *p<value)
    {
        p++;
        i++;
    }
    for(int j=*size-1;j>=i;j--)
    {
        *(p+1)=*p;
        p--;
    }
    *p=value;
    *size=*size+1;
}
int main()
{
    int arr[]={1,3,5,7,9};
    int size=sizeof(arr[0]);
    int valu=6;
    insertvalue(arr,&size,valu);
    printf("The array after inserting the value is:\n");
    for(int i=0;i<size;i++)
    {
        printf("%d\t",arr[i]);
    }
    return 0;
}
