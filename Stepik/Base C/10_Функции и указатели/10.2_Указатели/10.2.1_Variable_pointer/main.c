#include <stdio.h>

int   main(void)
{
  int num_1 = 0, num_2 = 0;

  scanf("%d %d", &num_1, &num_2);

  int *p_num_1 = &num_1, *p_num_2 = &num_2;
  
  printf("num_1 = %d\nnum_2 = %d\n", num_1, num_2);
  printf("num_1 = %p\nnum_2 = %p\n", &num_1, &num_2);
  printf("p_num_1 = %d\np_num_2 = %d\n",
    *p_num_1, *p_num_2);
  printf("p_num_1 = %p\np_num_2 = %p\n", &p_num_1, &p_num_2);
  
  return (0);
}