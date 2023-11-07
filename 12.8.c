#include<stdio.h>
int binarysearch(int *arr,int high,int item)
{
    int low=0;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(arr[mid]==item)
            { //printf("%d\n",low);
                return mid;}
        else if(arr[mid]<item)
            low=mid+1;
        else
            high=mid-1;
    }
    return -1;

}
int main()
{
    int arr[]={1,3,5,7,9,11};
    int item=11;
    int n=sizeof(arr);
    int index=binarysearch(arr,n-1,item);
    if(index==-1)
        printf("Item is not found\n");
    else
        printf("Item found at index: %d\n",index);
    return 0;
}
