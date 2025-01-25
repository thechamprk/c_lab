//ctof

#include<stdio.h>

int main()
{    
    int  c, f;
    printf("Input Temperature: ");
    scanf("%d", &c);
    
    f = c*(9/5) + 32;
    printf("Given temperature in Fahrenheit: %d\n", f);
}
