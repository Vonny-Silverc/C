#include <stdio.h>

int   main(void)
{
  int arr_size = 0;
  
  scanf("%d", &arr_size);
  arr_size -= 1;
  
  int arr[arr_size];

  for(int itr = 0; itr < arr_size; itr++)
    scanf("%d", &arr[itr]);
   
  for(int itr = 0, mtr = arr_size; mtr >=0;)
    if(arr[itr++] != arr[mtr--]) 
    {
      printf("NO"); 
      return (0);
    }

  printf("YES\n");
  
  return (0);
}