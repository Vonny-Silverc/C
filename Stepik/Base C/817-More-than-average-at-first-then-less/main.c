#include <stdio.h>

int   main(void)
{
  int     arr_num = 0;
  double  res  = 0.00;
  
  scanf("%d", &arr_num);
  arr_num -= 1;
  int     arr_one[arr_num];

  for (int itr = 0; itr <= arr_num; itr++)
  {
    scanf("%d", &arr_one[itr]);
    res += arr_one[itr];
    if (itr == arr_num) res /= (itr + 1); 
  }
  for (int itr = 0; itr <= arr_num; itr++)
  {
    if (arr_one[itr] > res) printf("%d ", arr_one[itr]);
  }
  for (int itr = 0; itr <= arr_num; itr++)
  {
    if (arr_one[itr] <= res) printf("%d ", arr_one[itr]);
  }
  printf("\n");
  return (0);
}