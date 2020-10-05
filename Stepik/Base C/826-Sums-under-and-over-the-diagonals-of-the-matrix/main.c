#include <stdio.h>

int   main(void)
{
  int arr_size = 0, count = 1, sum_1 = 0, sum_2 = 0;
  scanf("%d", &arr_size);
  int arr[arr_size][arr_size];
  
  for (int mtr = 0; mtr < arr_size; mtr++)
    for (int col = 0; col < arr_size; col++)
      scanf("%d", &arr[mtr][col]);

  for (int str = 0; str < arr_size - 1; str++)
  {
    for (int col = count; col < arr_size; col++)
      sum_1 += arr[str][col];
    count++;
  }
  
  count = 1;
  
  for (int col = arr_size - 1; col > 0; col--)
  {
    for (int str = count; str < arr_size; str++)
      sum_2 += arr[str][col];
    count++;
  }

  sum_1 < sum_2 ? (printf("%d %d", sum_1, sum_2)) :
   (printf("%d %d", sum_2, sum_1));
  return (0);
}