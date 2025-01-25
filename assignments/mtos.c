#include<stdio.h>

void main()
{
    int mins,secs,total_secs;
    printf("Enter minutes: ");
    scanf("%d", &mins);
    printf("Enter seconds: ");
    scanf("%d", &secs);
    
    total_secs = (mins*60)+secs;
    
    printf("Total time in seconds: %d\n",total_secs);
}
