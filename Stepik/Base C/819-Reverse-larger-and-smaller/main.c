#include <stdio.h>

int   main(void)
{
  int arr_siz =     0;
  int num_min =  9999;
  int num_max = -9999;
  int ctr_one =     0;
  int ctr_two =     0;

  scanf("%d", &arr_siz);
  int arr_one[arr_siz - 1];
  for (int itr = 0; itr < arr_siz; itr++)
  {
    scanf("%d", &arr_one[itr]);
    if (arr_one[itr] < num_min)
    {
      num_min = arr_one[itr];
      ctr_one = itr;
    }
    if (arr_one[itr] > num_max)
    {
      num_max = arr_one[itr];
      ctr_two = itr;
    }
  }
  arr_one[ctr_two] = num_min;
  arr_one[ctr_one] = num_max;
  for (int itr = 0; itr < arr_siz; itr++)
    printf("%d ", arr_one[itr]);

  return (0);
}