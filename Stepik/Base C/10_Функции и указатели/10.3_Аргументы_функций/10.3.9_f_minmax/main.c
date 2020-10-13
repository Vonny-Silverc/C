#include <stdio.h>

int   minmax(int arr[], int n, int fl)
{    
  int res = 0;

  for (int itr = 0; itr < n; itr++)
  {
    if (fl == 0) arr[itr] < res ? (res = arr[itr]) : (0);
    else arr[itr] > res ? (res = arr[itr]) : (0);
  }
  
  return (res);
}

int   main(void)
{
  int size = 0, res = 0, flg = 0;
  
  scanf("%d", &size);
  int arr[size];

  for (int itr; itr < size; itr++)
    scanf("%d", &arr[itr]); 
  scanf("%d", &flg);

  printf("%d\n", res =  minmax(arr, size, flg));
  
  return (0);
}