#include <stdio.h>

int   abs_arr(int arr[], int n)
{
  int itr = 0, elem = 0;

  for (int mtr = 0; mtr < n; mtr++)
  {  
    if (arr[mtr] < 0) {arr[mtr] *= -1; itr++;}
  }  
  return (itr);
}

int   main(void)
{
  int size = 0, itr = 0;
  scanf("%d", &size);

  int arr[size];

  for (int itr; itr < size; itr++)
    scanf("%d", &arr[itr]);
  printf("%d ", itr = abs_arr(arr, size));

  for (int itr; itr < size; itr++)
    printf("%d ", arr[itr]);
  printf("\n");
  
  return (0);
}