#include <stdio.h>

int   binary_search(int arr[], int n, int arg)
{
  int first = 0, last = n, res = -1, mid = 0;
    
  while (first <= last)
  {
    mid = (last + first) / 2;
    if (arr[mid] == arg) return (mid);
    if (arg <= arr[mid]) last = mid - 1;
    else first = mid + 1;
  }

  return (res);	   
}

int   main(void)
{
  int size = 0, num = 0;
  
  scanf("%d", &size);
  int arr[size];

  for (int itr; itr < size; itr++)
    scanf("%d", &arr[itr]); 
  scanf("%d", &num);

  printf("%d\n", num = binary_search(arr, size, num));
  
  return (0);
}