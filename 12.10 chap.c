#include<stdio.h>
int comparearr(int *arr1,int *arr2,int n)
{
   for(int i=0;i<n;i++)
   {
       if(arr1[i]!=arr2[i])
        return 0;
        else
        return 1;
   }

}
int main()
{
    int arr1[]={1,3,5,7,9,3};
    int arr2[]={1,3,5,7,9,3};
    int n=sizeof(arr1);
    int result = comparearr(arr1, arr2, n);

    if (result == 1)
    {
        printf("The arrays are identical.\n");
    }
    else
    {
        printf("The arrays are not identical.\n");
    }

    return 0;
}
