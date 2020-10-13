#include <stdio.h>

int   linear_search(int arr[], int n, int arg)
{
  int pos = -1;

  for (int itr = 0; itr < n; itr++)
    if (arg == arr[itr]) {pos = itr; break;}  

  return (pos);
}

int   main(void)
{
  int size = 0, num = 0;
  
  scanf("%d", &size);
  int arr[size];

  for (int itr; itr < size; itr++)
    scanf("%d", &arr[itr]); 
  scanf("%d", &num);

  printf("%d\n", num = linear_search(arr, size, num));
  
  return (0);
}