#include<stdio.h>

void main()

{
    int a,b,c;

    printf("Enter those three numbers: \n");
    scanf("%d%d%d", &a,&b,&c);

    if(a>b&&a>c)
    {
        printf("The greatest number is: %d\n",a);
    }
    else if(b>c&&b>a)
    {
        printf("The greatest number is: %d\n", b);
    }
    else
    {
        printf("The greatest number is: %d\n", c);
    }
}
