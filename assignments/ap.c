#include<stdio.h>

void main()
{
    int a,d,n,t;
    printf("Enter value of first term: ");
    scanf("%d", &a);
    
    printf("Enter common difference: ");
    scanf("%d", &d);
    
    printf("How many terms do you wanna get?\n");
    scanf("%d", &n);
    
    printf("Your Arithmetic Progression is: ");
    
    for(n>0; n=n-1;)
    {
        t = a+(n-1)*d;
        printf("%d",t);
        if(n>1)
        {
            printf(",");
        }
    }
    printf("\n");
}
