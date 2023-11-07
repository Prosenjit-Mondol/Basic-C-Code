#include<stdio.h>
void reversearr(int *arr,int n)
{
    int *start=arr;
    int *end=arr+(n-1);
    while(start<end)
    {
        int temp=*start;
        *start=*end;
        *end=temp;
        start++;
        end--;

    }
}
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9};
    int n=sizeof(arr);
    reversearr(arr,n);
    for(int j=0;j<n;j++)
    {
        printf("%d ",arr[j]);
    }
    printf("\n");
    return 0;
}
