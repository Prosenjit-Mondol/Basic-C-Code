#include<stdio.h>
float di(float i,float j)
{
    float total=i/j;
    return(total);
}
int main()
{
    float v;
    v=di(5.0,6.0);
    printf("%f\n",v);
    return 0;
}

/*
#include<stdio.h>

void diff (int I,int j) ;

void main()

{

diff(5,6);

getch();

}

void diff(int i, int j)

{

int total;

total=i-j;

printf("%d",total);

}*/
