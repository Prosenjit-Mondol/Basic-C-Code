#include<stdio.h>
int main()
{
    int n,i,s,p;
    printf("enter the length of the array:\n");
    scanf("%d",&n);
    int a[n];
    printf("input the array element\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    s=a[0];
    p=0;
    for(i=0;i<n;i++){
        if(s>a[i]){
            s=a[i];
            p=i+1;
        }
    }
    printf("Smallest value : %d\n",s);
    printf("Possion of the value : %d\n",p);
    return 0;
}
