#include <stdio.h>

int   main(void)
{
  int size = 0, swap = 0, temp = 0;

  scanf("%d", &size);

  int arr[size][size];

  for (int str = 0; str < size; str++)
    for (int col = 0; col < size; col++)
      scanf("%d", &arr[str][col]);
  
  scanf("%d", &swap);

  while (swap)
  {
    for (int str = 0; str < size; str++)
    {
      temp = arr[str][size - 1];
      for (int col = size - 1; col > 0; col--)
        arr[str][col] = arr[str][col - 1];
      arr[str][0] = temp;
    }
    swap--;
  }

  for (int str = 0; str < size; str++)
  {
    for (int col = 0; col < size; col++)
      printf("%d ", arr[str][col]);
    printf("\n");
  }

  return (0);
}