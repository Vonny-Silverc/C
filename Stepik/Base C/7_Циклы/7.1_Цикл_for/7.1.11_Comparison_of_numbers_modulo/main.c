#include <stdio.h>

int main(void) 
{
  int N;
  int max;
  int number;

  N = 0;
  max = -100;
  number = 0;
  scanf("%d", &N);
  for (int i = 1; i <= N; i++)
  {
    scanf("%d", &number);
    if (max < number)
      max = number;
  }
  printf("%d\n", max);
  return 0;
}