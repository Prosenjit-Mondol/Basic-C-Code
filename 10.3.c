#include<stdio.h>
#include<math.h>
double fact(int power)
{
    double f=1;
    if(power==0)
        return 1;
    else
        f=power*fact(power-1);
    return f;
}
double equation(int x,int power)
{
    double result=pow(x,power)/fact(power);
    return result;
}
int main()
{
  int i, j, x;
    double sum = 0, temp;

    printf("Enter a Number: ");
    scanf("%d", &x);

    for (i = 1, j = 1; i <= 11; i += 2, j++)
    {
        if (j % 2 != 0)
            sum -= equation(x, i);
        else
            sum += equation(x, i);
    }
    printf("Total Summation: %lf\n", sum);

    return 0;
}
