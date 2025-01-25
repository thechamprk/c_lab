#include<stdio.h>

void main()
{
    int hrs,days;
    printf("Enter hours: ");
    scanf("%d", &hrs);
    
    days = hrs/24;
    
    printf("Number of days: %d\n",days);
}
