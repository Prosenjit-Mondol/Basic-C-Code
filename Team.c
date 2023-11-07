#include<stdio.h>
int main()
{
    int count=0,out=0,i,j,n,a[1000][10];
    scanf("%ld",&n);
    for(i=0;i<n;i++){
        for(j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<3;j++){
            if(a[i][j]==1)
            count++;
        }
        if(count>=2)
            out++;
            count=0;
    }
    printf("%d\n",out);
    return 0;
}
