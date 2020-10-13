#include <stdio.h>

int   main(void)
{
  int arr_size = 0;
  
  scanf("%d", &arr_size);
  
  int arr[arr_size - 1];    

  for(int itr = 0; itr < arr_size; itr++)
  {
    scanf("%d", &arr[itr]);
    if (itr >= arr_size / 2) printf("%d ", arr[itr]);
  }

  for (int itr = 0; itr < arr_size / 2; itr++)
    printf("%d ", arr[itr]);

  printf("\n");
  
  return (0);
}