#include <stdio.h>

int   main(void)
{
  int arr_size = 0, arr_shift = 0, swap = 0;

  scanf("%d", &arr_size);
  int arr[arr_size][arr_size];
  for (int str = 0; str < arr_size; str++)
  {
    for (int col = 0; col < arr_size; col++)
      scanf("%d", &arr[str][col]);
  }
  scanf("%d", &arr_shift);

  while (arr_shift != 0)
  {
    for (int str = 0; str < arr_size; str++)
    {
      swap = arr[str][arr_size - 1];
      for (int col = arr_size - 1; col > 0; col--)
        arr[str][col] = arr[str][col - 1];
      arr[str][0] = swap;
    }
    arr_shift--;
  }

    for (int str = 0; str < arr_size; str++)
  {
    for (int col = 0; col < arr_size; col++)
      printf("%d ", arr[str][col]);
    printf("\n");
  }

  return (0);
}