#include <stdio.h>

int   main(void)
{
  int size = 0, sum_1 = 0, sum_2 = 0;
  
  scanf("%d" ,&size);
  
  int arr[size][size];
  
  for (int str = 0; str < size; str++)
    for(int col = 0; col < size; col++)
    {
      scanf("%d", &arr[str][col]);
      if (col > str) sum_1 += arr[str][col];
      if (size <= str + col) sum_2 += arr[str][col];
    }      

  if (sum_1 > sum_2) printf("%d %d", sum_2, sum_1);
  else printf("%d %d", sum_1, sum_2);
  
  return (0);
}