#include <stdio.h>

int   main(void)
{
  int arr_size = 0, num = 0, flg = 0;
  
  scanf("%d", &arr_size);
  arr_size -= 1;

  int arr[arr_size];

  for (int itr = 0; itr <= arr_size; itr++)
  {
    scanf("%d", &arr[itr]);
    if (itr == arr_size) num = arr[itr];
  }

  for (int itr = 0; itr < arr_size; itr++)
  {
    if (arr[itr] < num) {flg = 1; printf("%d ", arr[itr]);}
  }

  if (!flg) printf("0");
  printf("\n");

  return (0);
}