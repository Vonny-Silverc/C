#include <stdio.h>

int   main(void)
{
  int size_str = 0, size_col = 0, zero_pos = 0;
  int num = 1, coil = 0;

  scanf("%d %d", &size_str, &size_col);
  
  int arr_col = size_col - 1, arr_str = size_str - 1;
  int arr[size_str][size_col];
///Определение количества витков  
  if (size_str > size_col) coil = size_str / 2;
  else coil = size_col / 2;
///Цикл заполнения сассива нулями.
  for(int str = 0; str < size_str; str++)
    for (int col = 0; col < size_col; col++)
      arr[str][col] = 0;
///Циклы заподнения массива числами по спирали
  while (coil >= 0)
  {
///Верхний ряд с лева на право
    for (int col = zero_pos; col <= arr_col; col++)
      if (arr[zero_pos][col] == 0) {arr[zero_pos][col] = num; num++;}
///Правый столбец сверху в низ
    for (int str = zero_pos + 1; str <= arr_str; str++)
      if (arr[str][arr_col] == 0) {arr[str][arr_col] = num; num++;}
///Нижний ряд с права на лево
    for (int col = arr_col; col > zero_pos; col--)
      if (arr[arr_str][col - 1] == 0) {arr[arr_str][col - 1] = num; num++;} 
///Левый столбец снизу в верх
    for (int str = arr_str; str > zero_pos + 1; str--)
      if (arr[str - 1][zero_pos] == 0) {arr[str - 1][zero_pos] = num; num++;}
    
    coil--;
    arr_str--;
    arr_col--;
    zero_pos++;
  }
///Цикл вывода массива
  for(int str = 0; str < size_str; str++)
  {
    for (int col = 0; col < size_col; col++)
      printf("%3d ", arr[str][col]);
    printf("\n");
  }

  return (0);
}