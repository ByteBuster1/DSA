#include<stdio.h>
int main()
{ 
    int arr[5], i;
    
    printf("Enter the elements of array : ");
    for (i=0; i<5; i++)
    {
       scanf("%d", &arr[i]);
    }
    
    printf("\n Given array: "); 
    for (i=0; i<5; i++)
    {
       printf("%d ", arr[i]);
    }
    
    printf("\n Reverse of the given array: "); 
    for(i = 4; i >= 0; i--)
    {
       printf("%d ", arr[i]);
    }
    
    return 0;
}
