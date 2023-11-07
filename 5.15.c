#include <stdio.h>
#include <math.h>
int main()
{
    double investmentAmount, rate, interest, totalAmount;

    // get input from user
    printf("Enter investment amount: ");
    scanf("%lf", &investmentAmount);

    // set rate and time
    rate = 8.75 / 100.0;
    int time = 10;

    // calculate interest and total amount
    interest = investmentAmount * pow(1 + rate, time) - investmentAmount;
    totalAmount = investmentAmount + interest;

    // display results
    printf("\nInvestment Amount: %.2lf", investmentAmount);
    printf("\nRate of Interest: %.2lf%%", rate * 100);
    printf("\nInvestment Time: %d years", time);
    printf("\nInterest Earned: %.2lf", interest);
    printf("\nTotal Amount: %.2lf", totalAmount);

    return 0;
}
