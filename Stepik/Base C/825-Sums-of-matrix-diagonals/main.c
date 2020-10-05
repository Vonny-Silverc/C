#include <stdio.h>

int   main(void)
{
  int arr_size = 0, arr_sum_1 = 1, arr_sum_2 = 1;
  scanf("%d", &arr_size);
  int arr[arr_size][arr_size];
  
  for (int str = 0; str < arr_size; str++)
  {
    for (int col = 0; col < arr_size; col++)  
      scanf("%d", &arr[str][col]);
  }

  for (int dig = arr_size - 1, dig_rev = 0; dig >= 0; dig--)
  {
    arr_sum_1 *= arr[dig][dig];
    arr_sum_2 *= arr[dig][dig_rev];
    dig_rev++;
  }
  printf("%d %d\n", arr_sum_1 >= arr_sum_2 ? arr_sum_1 : arr_sum_2,
   arr_sum_1 < arr_sum_2 ? arr_sum_1: arr_sum_2);
  return (0);
}