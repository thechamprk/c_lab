#include<stdio.h>

void main()
{
    int p,r,t,n,si,ci;
    printf("Enter the Principle amount(p): INR");
    scanf("%d", &p);
    printf("Enter rate percent: ");
    scanf("%d", &r);
    printf("Enter time [in year(s)]: ");
    scanf("%d", &t);
    printf("Enter the number of times interest is compounded per year: ");
    scanf("%d",&n);
    
    si = (p*r*t)/100;
    ci = (p*(1+(r/n)^(n*t))) - p;
    
    printf("Your Simple Interest: INR%d\n",si);
    printf("Your Compound Interest: INR%d\n",ci);
}
