#include <stdio.h>

int   main(void)
{
  int size = 0, sum_1 = 1, sum_2 = 1;
  
  scanf("%d", &size);
  
  int arr[size][size];
  ///Считываем массив
  for (int str = 0; str < size; str++)
    for (int col = 0; col < size; col++)  
      scanf("%d", &arr[str][col]);
  ///Считаем произведение главной и побочной диагонали
  for (int dig = size - 1, dig_rev = 0; dig >= 0; dig--)
  {
    sum_1 *= arr[dig][dig];
    sum_2 *= arr[dig][dig_rev];
    dig_rev++;
  }
  ///Выводим значения (сначало большее)
  printf("%d %d\n", sum_1 >= sum_2 ? sum_1 : sum_2, 
    sum_1 < sum_2 ? sum_1: sum_2);
  
  return (0);
}