#include <stdio.h>
# define LEN 10

int   main(void)
{
  int s_str = 0, s_col = 0, min = 0, max = 0;
  
  scanf("%d %d", &s_str, &s_col);

  int arr[s_str][s_col]; 
  int sum[LEN] = {0};

  for(int str = 0; str < s_str; str++)
    for(int col = 0; col < s_col; col++)
    {
      scanf("%d",  &arr[str][col]);
      sum[col] += arr[str][col];
    }
        
  for(int itr = 1; itr < s_col; itr++)
  {
    if(sum[min] > sum[itr]) min = itr;
    if(sum[max] < sum[itr]) max = itr;
  }
        
  for(int itr = 0; itr < s_str; itr++) 
  {
    for(int mtr = 0; mtr < s_col; mtr++)
    {
      if(mtr == min) printf("%d ", arr[itr][max]);
      else if(mtr == max) printf("%d ", arr[itr][min]);
      else printf("%d ", arr[itr][mtr]); 
    }
    printf("\n");
  }

  return (0);
}