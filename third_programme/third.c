#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,s,Area;
    printf("Enter the numbers a,b,c\n");
    scanf("%f%f%f", &a,&b,&c);
    s=(a+b+c)/2;
    Area = sqrt(s*(s-a)*(s-b)*(s-c));
    printf("The area of triangle %f\n", Area);
    return 0;
}
