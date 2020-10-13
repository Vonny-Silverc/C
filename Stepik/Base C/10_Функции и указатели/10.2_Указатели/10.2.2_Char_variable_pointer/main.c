#include <stdio.h>

int main(void) {
  char sym = 0;

  scanf("%c", &sym);

  char *p_sym = &sym;
  
  printf("sym = %c\n", sym);
  printf("sym = %p\n\n", &sym);
  printf("*p_sym = %c\n",*p_sym);
  printf("p_sym = %p\n", &p_sym);

  return (0);
}