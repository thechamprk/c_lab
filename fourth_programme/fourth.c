#include<stdio.h>

void main()
{
    float a,b,c;

    printf("Enter the first number:  ");
    scanf("%f", &a);
    printf("Enter the second number: ");
    scanf("%f", &b);

    if(b==0)
      {
        printf("YOU CANNOT DIVIDE A NUMBER BY ZERO\n");
      }
    else
      {
        c=a/b;
        printf("The result is %f\n",c);
      }
}

