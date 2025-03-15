//id

#include<stdio.h>

int main()
{
    int a = 50;
    int b = 62;
    int x, y;
    
    x = a++;
    y = b--;
    
    printf("Increment is %d\n", x);
    printf("Decrement is %d\n", y);
    
    printf("Increment is %d\n", a);
    printf("Decrement is %d\n", b);
}
