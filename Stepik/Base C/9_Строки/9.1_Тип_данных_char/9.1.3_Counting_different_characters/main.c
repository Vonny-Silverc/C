#include <stdio.h>

int   main(void)
{
  int   size = 0, sym_num = 0;
  
  scanf("%d", &size);

  char  arr_sym[size];
  int   arr_num[26] = {0};

  for (int itr = 0; itr < size; itr++)
  {
    scanf(" %c", &arr_sym[itr]);
    sym_num = arr_sym[itr];
    if (sym_num >= 64 && sym_num <= 90) 
      arr_num[sym_num - 65] += 1;
    if (sym_num >= 97 && sym_num <= 122) 
      arr_num[sym_num - 97] += 1;
  }

  for (int itr = 0; itr < 26; itr++)
    printf("%d ", arr_num[itr]);

  return (0);
}