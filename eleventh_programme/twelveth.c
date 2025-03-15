#include<stdio.h>

double power(double base, int exponent)
{
    if(exponent == 0)
    return 1;

    if(exponent > 0)
    return base *power(base,exponent-1);

    else
    return 1 /(base *power(base, exponent -1));
}



int main()
{
    double base;
    int exponent;

    printf("Enter the base: ");
    scanf("%lf", &base);

    printf("Enter the exponent:");
    scanf("%d", & exponent);

    double result = power(base,exponent);
    printf("%.2lf raised to power of %d is %.2lf\n", base, exponent, result);

    return 0;
}