#include<stdio.h>
int main()
{
    long long int s1,s2,s3,s4;
    int j,i,k,r=0;
    scanf("%lld%lld%lld%lld",&s1,&s2,&s3,&s4);
    if(s1==s2 && s2==s3 && s3==s4)
        r=3;
    else if(s1==s3 && s3==s4)
        r=2;
    else if(s1==s4 && s3==s2)
        r=2;
    else if(s1==s2 && s3==s4)
        r=2;
    else if(s1==s3 && s3==s4)
        r=2;
    else if(s1==s3 && s2==s4)
        r=2;
    else if(s1==s3 && s3==s2)
        r=2;
    else if(s4==s3 && s3==s2)
        r=2;
    else if(s1==s2 && s3!=s4)
        r=1;
    else if(s1==s3 && s2!=s4)
        r=1;
    else if(s1==s4 && s3!=s2)
        r=1;
    else if(s3==s2 && s1!=s4)
        r=1;
    else if(s4==s2 && s3!=s2)
        r=1;
    else if(s3==s4 && s1!=s2)
        r=1;
    else
        r=0;
    printf("%d\n",r);
    return 0;
}
