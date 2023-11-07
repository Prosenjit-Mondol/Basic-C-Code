#include<stdio.h>
int main()
{
    int *a,i,j,temp,n;
    printf("Enter the number of element to store in the array:\n");
    scanf("%d",&n);
    printf("Enter the element:\n");
    for(i=0;i<n;i++)
        scanf("%d",a+i);
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(*(a+i)>*(a+j))
            {
                temp=*(a+i);
                *(a+i)=*(a+j);
                *(a+j)=temp;
            }
        }
    }
    printf("The element in the array after sorting:\n");
    for(i=0;i<n;i++)
    {
        printf("%d :- %d\n",i+1,*(a+i));
    }
    return 0;
}
