#include<stdio.h>
#include<math.h>
int main()
{
    float f,ff,fff,r;
    scanf("%f",&f);
    r= ceil(f);
    ff= floor(f);
    fff=round(f);
    printf("%f %f %f",fff,ff,r);
    return 0;
}

