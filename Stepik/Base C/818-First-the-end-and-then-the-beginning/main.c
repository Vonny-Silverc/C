#include <stdio.h>

int   main(void)
{
  int arr_num = 0;
  
  scanf("%d", &arr_num);
  int arr_one[arr_num - 1];    

  for (int itr = 0; itr <= arr_num; itr++)
    scanf("%d", &arr_one[itr]); 
  for (int itr = arr_num / 2; itr < arr_num; itr++)
    printf("%d ", arr_one[itr]);
  for (int itr = 0; itr < arr_num / 2; itr++)
    printf("%d ", arr_one[itr]);

  printf("\n");
  return (0);
}