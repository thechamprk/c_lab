#include<stdio.h>
int main()
{
int x,y,add,sub,div,mul,mod;

printf("Enter the first number: ");
scanf("%d",&x);
printf("Enter the second number: ");
scanf("%d",&y);
add = x+y;
sub = x-y;
div = x/y;
mul = x*y;
mod = x%y;

printf("The addition is %d\n", add);
printf("The subtraction is %d\n", sub);
printf("The division is %d\n", div);
printf("The multiplication is %d\n", mul);
printf("The modulus is %d\n", mod);
return 0;
}
