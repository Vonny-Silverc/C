#include <stdio.h>

int   main(void)
{
  int arr_size = 0,  arr_count = 2;
  
  scanf("%d", &arr_size);
  
  int arr[arr_size][arr_size];
  
  for (int itr_str = 0; itr_str < arr_size; itr_str++)
  {
    for (int itr_col = 0; itr_col < arr_size; itr_col++)
      arr_count % 2 == 0 ? (printf("%d ", arr[itr_str][itr_col] = itr_col + 1)) :
        (printf("%d ", arr[itr_str][itr_col] = arr_size - itr_col));
    arr_count++;
    printf("\n");
  }
  
  return (0);
}