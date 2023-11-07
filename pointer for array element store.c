#include<stdio.h>
int main()
{
    int a[50],i,n;
    printf("Enter the number of element of store in the array:\n");
    scanf("%d",&n);
    printf("Input %d number of element in the array:\n",n);
    for(i=0;i<n;i++)
    {
        printf("element -%d:",i);
        scanf("%d",a+i);
    }
    for(i=0;i<n;i++)
    {
        printf("The element you entered-%d : %d\n",i,*(a+i));

    }
    return 0;
}
