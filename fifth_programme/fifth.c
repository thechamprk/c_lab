#include<stdio.h>

int main()
{
    int a,d,i,n;
    printf("Enter the First Term(a): ");
    scanf("%d", &a);
    printf("Enter the Common Difference(d): ");
    scanf("%d", &d);
    printf("Enter number of Terms(n): ");
    scanf("%d", &n);
    printf("\n");
    printf("Arithmetic Progression: ");
    
    for(i=0; i<n; ++i)
    {
        printf("%d", a+i*d);
        if(i<n-1)
        {
        printf(",");
        }
        else
        {
            printf(".");
        }
    }
    printf("\n:)\n");
}
