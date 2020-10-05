#include <stdio.h>

int   main(void)
{
  int size_str = 0, size_col = 0, arr_res = 0;
  
  scanf("%d %d", &size_str, &size_col);

  int arr[size_str - 1][size_col - 1];
  for (int str = 0; str < size_str; str++)
  {
    for(int col = 0; col < size_col; col++)
      scanf("%d", &arr[str][col]);
  }

  for (int col = size_col - 1; col >= 0; col--)
  {
    arr_res = 0;
    for(int str = 0; str < size_str; str++)
      arr_res += arr[str][col];
    printf("%d ", arr_res);
  }  
  return (0);
}