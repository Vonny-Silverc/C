#include <stdio.h>

int   main(void)
{
  int arr_size = 0,  arr_count_1 = 1, arr_count_2 = 1;
  scanf("%d", &arr_size);
  int arr[arr_size][arr_size];
  
  for (int str = 0; str < arr_size; str++)
  {
    for (int col = 0; col < arr_size; col++)
      arr[str][col] = 0;
  }
  
  for (int dig = 0; dig < arr_size; dig++)
    arr[dig][dig] = arr_count_1;

  for (int col = 0; col < arr_size; col++)
  {
    for (int str = arr_count_1; str < arr_size; str++)
    {
      arr[str][col] = arr_count_2 + 1;
      arr_count_2++;
    }
    arr_count_2 = 1;
    arr_count_1++;
  }
  
  arr_count_1 = 1;
  arr_count_2 = 1;
  
  for (int str = 0; str < arr_size; str++)
  {
    for (int col = arr_count_1; col < arr_size; col++)
    {
      arr[str][col] = arr_count_2 + 1;
      arr_count_2++;
    }
    arr_count_2 = 1;
    arr_count_1++;
  }

  for (int str = 0; str < arr_size; str++)
  {
    for (int col = 0; col < arr_size; col++)
      printf("%d ", arr[str][col]);
    printf("\n");
  }
  return (0);
}