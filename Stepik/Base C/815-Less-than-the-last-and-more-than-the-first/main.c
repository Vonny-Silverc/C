#include <stdio.h>

int   main(void)
{
  int arr_num = 0;
  int num_one = 0;
  int num_two = 0;
  int flg = 0;
  scanf("%d", &arr_num);

  int arr_one[arr_num - 1];
  for (int itr = 0; itr <= arr_num - 1; itr++)
  {
    scanf("%d", &arr_one[itr]);
    if (itr == 0) num_one = arr_one[itr];
    if (itr == arr_num - 1) num_two = arr_one[itr];
  }
  for (int itr = 0; itr < arr_num - 1; itr++)
  {
    if (arr_one[itr] < num_two && arr_one[itr] > num_one) { 
      flg = 1;
      printf("%d ", arr_one[itr]);
    }
  }
  if (flg != 1) printf("0");
  printf("\n");
  return (0);
}