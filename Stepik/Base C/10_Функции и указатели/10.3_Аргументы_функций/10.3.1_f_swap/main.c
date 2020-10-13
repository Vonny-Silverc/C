#include <stdio.h>

void  swap(int *a, int *b)
{
  int temp = 0;
    
  temp = *a;
  *a = *b;
  *b = temp;

  printf("a = %d\nb = %d\n", *a, *b);
}

int   main(void)
{
  int num_1 = 0, num_2 = 0;

  scanf("%d %d", &num_1, &num_2);
  swap(&num_1, &num_2);
  printf("num_1 = %d\nnum_2 = %d\n", num_1, num_2);

  return (0);
}