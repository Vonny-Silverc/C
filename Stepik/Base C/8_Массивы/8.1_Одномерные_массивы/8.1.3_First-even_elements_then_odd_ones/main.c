#include <stdio.h>

int   main(void)
{
  int arr_size = 0;

  scanf("%d", &arr_size);
  arr_size -= 1;

  int arr[arr_size];

  for (int itr = 0; itr < arr_size; itr++)
  {
    scanf("%d",&arr[itr]);
    if (arr[itr] % 2 == 0) printf("%d ",arr[itr]);
  }

  for (int itr = 0; itr < arr_size; itr++)
    if (arr[itr] % 2 != 0) printf("%d ",arr[itr]); 

  return (0);
}