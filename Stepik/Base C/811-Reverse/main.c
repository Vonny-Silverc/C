#include <stdio.h>

int   main(void)
{
  int arr_size = 0;
  int count = 0;

  scanf("%d", &arr_size);
  arr_size -= 1;

  int arr_one[arr_size];

  for (int itr = 0; itr <= arr_size; itr++)
    scanf("%d", &arr_one[itr]);
  for (int itr = arr_size; itr >= 0; itr--)
  {
    printf("%d ", arr_one[itr]);
    count++;
  }
  printf("\n");
  return (0);
}