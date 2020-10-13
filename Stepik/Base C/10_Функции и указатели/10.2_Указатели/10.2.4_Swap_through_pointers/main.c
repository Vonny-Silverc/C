#include <stdio.h>

int   main(void) {

  int num_1 = 0, num_2 = 0;
  
  scanf("%d %d", &num_1, &num_2);

  int *p_1 = &num_1, *p_2 = &num_2;
  int temp;

  temp = *p_1;
  *p_1 = *p_2;
  *p_2 = temp;
    
  printf("%d %d", num_1, num_2);

  return (0);
}