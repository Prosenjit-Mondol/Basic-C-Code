#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

int main()
{
    while(scanf("%lld", &n)==1)
    {
        if(n>=0)
        {
            printf("%lld\n", n);
        }
        else
        {
            div1 = n%10;
            s1= n/10;
            div2 = s1%10;
            s2 = (s1-div2)+div1;
            if(s1>=s2)
            {
                printf("%lld\n", s1);
            }
            else if(s1<s2)
            {
                printf("%lld\n", s2);
            }
        }
    }
}
