#include<stdio.h>

void main()
{
    float a,b,c;
      
    printf("Enter the first number:  ");
    scanf("%f", &a);
    printf("Enter the second number: ");
    scanf("%f", &b);

    do
      {
        printf("YOU CANNOT DIVIDE A NUMBER BY ZERO\n");
        printf("\n");
        printf("Please enter a valid number to proceed the division: ");
        scanf("%f", &b);  
      }
    while(b==0);
      {
        c=a/b;
        printf("The result is %f\n",c);
      }
}
