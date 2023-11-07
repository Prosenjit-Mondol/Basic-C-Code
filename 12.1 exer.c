#include<stdio.h>

void printreverse(int *array ,int size)
{
    int *ptr=array+size-1;
    printf("Array elements in reverse order: ");
    while(ptr>=array)
    {
        printf("%d ",*ptr);
        ptr--;
    }
    printf("\n");
}
int main()
{
    int size,i;
    printf("Enter the size of the array : ");
    scanf("%d",&size);
    int array[size];
    printf("Enter the element of the array : ");
    for(i=0;i<size;i++)
    {
        scanf("%d",&array[i]);

    }
    printreverse(array,size);
    return 0;
}
