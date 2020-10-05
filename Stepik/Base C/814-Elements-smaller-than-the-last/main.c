#include <stdio.h>

int   main(void)
{
  int arr_num = 0;
  int num = 0;
  int flg = 0;
  scanf("%d", &arr_num);
  arr_num -= 1;

  int arr_one[arr_num];
  for (int itr = 0; itr <= arr_num; itr++)
  {
    scanf("%d", &arr_one[itr]);
    if (itr == arr_num) num = arr_one[itr];
  }
  for (int itr = 0; itr < arr_num; itr++)
  {
    if (arr_one[itr] < num) { flg = 1; printf("%d ", arr_one[itr]);}
  }
  if (flg != 1) printf("0");
  printf("\n");
  return (0);
}