#include <stdio.h>

int   main(void)
{
  int arr_str = 0,  arr_col = 0;

  scanf("%d %d", &arr_str, &arr_col);
  
  int arr[arr_str][arr_col];

  for (int itr_str = 0; itr_str < arr_str; itr_str++)
    for (int itr_col = 0; itr_col < arr_col; itr_col++)
      scanf("%d", &arr[itr_str][itr_col]);
  
  for (int itr_str = 0; itr_str < arr_str; itr_str++)
  {
    for (int itr_col = 0; itr_col < arr_col; itr_col++)
      printf("%d ", arr[itr_str][itr_col]);
    printf("\n");
  }
  
  return (0);
}