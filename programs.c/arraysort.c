#include<stdio.h>
#include<conio.h>

int
main ()
{
  int arr[100], i,j,temp ,n;

  printf ("Enter the size of array : ");
  scanf ("%d", &n);
 
 printf("Enter the element of array : ");
  for (i = 0; i < n; i++)
    {
      scanf ("%d", &arr[i]);
    }

  printf ("Array before sorting : \n");
  for (i = 0; i < n; i++)
    {
      printf ("%d \n", arr[i]);
    }
     
  for (i = 0 ; i < n - 1; i++)
  {
    for (j = 0 ; j < n - i - 1; j++)
    {
      if (arr[j] > arr[j+1])
      {
        temp = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = temp;
      }
    }
  }
 
  printf("Sorted list in ascending order:\n");
 
  for (i = 0; i < n; i++)
     printf("%d\n", arr[i]);

  return 0;
}
