#include <stdio.h>

int   main(void)
{
  int arr_size = 0, flg = 0;
  
  scanf("%d", &arr_size);

  int arr[arr_size - 1];
  
  for (int itr = 0; itr <= arr_size - 1; itr++)
    scanf("%d", &arr[itr]);
  
  for (int itr = 0; itr < arr_size - 1; itr++)
    if (arr[itr] < arr[arr_size - 1] && arr[itr] > arr[0])
    {
      printf("%d ", arr[itr]);
      flg++;
    }

  if (!flg) printf("0");
  printf("\n");

  return (0);
}