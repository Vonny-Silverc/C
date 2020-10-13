#include <stdio.h>

int   main(void)
{
  int arr_size = 0, count = 0;

  scanf("%d", &arr_size);
  arr_size -= 1;

  int arr[arr_size];

  for (int itr = 0; itr < arr_size; itr++)
    scanf("%d", &arr[arr_size - 1 - itr]);
  
  for (int itr = 0; itr < arr_size; itr++)
    printf("%d ", arr[itr]);
  
  printf("\n");
  
  return (0);
}