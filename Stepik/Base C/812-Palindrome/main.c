#include <stdio.h>

int   main(void)
{
  int arr_size = 0;
  scanf("%d", &arr_size);
  arr_size -= 1;
  int arr_one[arr_size];

  for (int itr = 0; itr <= arr_size; itr++)
    scanf("%d", &arr_one[itr]);
  for (int itr = 0; itr <= arr_size; itr++)
  {
    if (arr_one[itr] != arr_one[arr_size - itr])
    {
      printf("NO\n");
      return (0);
    }
  }

  printf("YES\n");
  return (0);
}