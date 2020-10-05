#include <stdio.h>

int   main(void)
{
  int size_str = 0, size_col = 0, count = 0, swap = 0;

  scanf("%d %d", &size_str, &size_col);
  int arr[size_str][size_col];
  int col_min = size_col - 1, col_max = -1;
  int sum_max = -9999, sum_min = 9999;

  for (int str = 0; str < size_str; str++)
  {
    for (int col = 0; col < size_col; col++)
      scanf("%d", &arr[str][col]);
  }

  for (int col = 0; col < size_col; col++)
  {
    for (int str = 0; str < size_str; str++)
        count += arr[str][col];
    if (count > sum_max){ col_max = col; sum_max = count;}
    if (count < sum_min){ col_min = col; sum_min = count;}
    count = 0;
  }

  for (int str = 0; str < size_str; str++)
  {
    swap = arr[str][col_max];
    arr[str][col_max] = arr[str][col_min];
    arr[str][col_min] = swap;
  }

    for (int str = 0; str < size_str; str++)
  {
    for (int col = 0; col < size_col; col++)
      printf("%d ", arr[str][col]);
    printf("\n");
  } 
  return (0);
}