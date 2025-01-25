//prime_nos
#include <stdio.h>

int main()
{
    int i, j, count;
    for(i=2; i<100; i++)
    {
        count=0;
        for(j=2;j<=i/2;j++)
        {
            if(i%j == 0)
            {
                count++;
                continue;
            }
        }
        if(count == 0)
        {
            printf("%d\t",i);
        }
    }
    return 0;
}

