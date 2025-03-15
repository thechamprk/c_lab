#include<stdio.h>

int findminPosition(int arr[], int size)
{
    int min=arr[0];
    int minPosition = 0;
    
    for(int i = 1; i<size; ++i)
    { 
            if(arr[i] < min)
            {
                min = arr[i];
                minPosition = i;
            }
    }
    return minPosition+1;
}

int main()
{
    int numbers[] = {2,6,7,12,34,22,21,8,1,13};
    int size=sizeof(numbers)/sizeof(numbers[0]);
    
    int minPosition = findminPosition(numbers, size);
    printf("Position of the minimum element: %d\n", minPosition);
    return 0;
}
