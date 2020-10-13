#include <stdio.h>

int   main(void)
{
  int num_1 = 0, num_2 = 0, num_3 = 0;
  
  scanf("%d %d %d", &num_1, &num_2, &num_3);

  int *p_1 = &num_1;
  int *p_2 = &num_2;
  int *p_3 = &num_3;

  if (*p_1 > *p_2) *p_1 = *p_2;
  if (*p_1 > *p_3) *p_1 = *p_3;

  *p_2 = *p_1;
  *p_3 = *p_1; 

  printf("%d %d %d", num_1, num_2, num_3);

  return (0);
}