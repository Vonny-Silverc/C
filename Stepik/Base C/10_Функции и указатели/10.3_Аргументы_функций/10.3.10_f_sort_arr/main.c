#include <stdio.h>

void  sort_arr(int arr[], int n, int fl)
{
  int temp = 0, pos = 0;
  int min = 9999, max = -9999, val = 0;
    
  if (!fl)
  {
    for (int mtr = 0; mtr < n; mtr++) 
    {
      for (int itr = mtr; itr < n; itr++)
        if (val > arr[itr]) {val = arr[itr]; pos = itr;}
      temp = arr[mtr];
      arr[mtr] = val;
      arr[pos] = temp;
      val = min;  
    }
  }
  else
  {
    for (int mtr = 0; mtr < n; mtr++) 
    {
      for (int itr = mtr; itr < n; itr++)
        if (val < arr[itr]) {val = arr[itr]; pos = itr;}
      temp = arr[mtr];
      arr[mtr] = val;
      arr[pos] = temp;
      val = max;  
    }
  }
}

int   main(void)
{
  int size = 0,flg = 0;
  
  scanf("%d", &size);
  int arr[size];

  for (int itr; itr < size; itr++)
    scanf("%d", &arr[itr]); 
  scanf("%d", &flg);

  sort_arr(arr, size, flg);

  for (int itr; itr < size; itr++)
    printf("%d ", arr[itr]); 
  printf("\n");
  
  return (0);
}