#include <stdio.h>

int main(void) {
  int num_1 = 0, num_2 = 0;

  scanf("%d %d", &num_1, &num_2);

  int *p_num_1 = &num_1, *p_num_2 = &num_2;
  
  printf("%d", *p_num_1 = *p_num_1 + *p_num_2);

  return (0);
}