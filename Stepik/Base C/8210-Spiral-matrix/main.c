#include <stdio.h>

int   main(void)
{
  int size_str = 0, size_col = 0, zero_pstn = 0;
  scanf("%d %d", &size_str, &size_col);
  int number = 1, coils = 0;
  int arr_col = size_col - 1, arr_str = size_str - 1;
  int arr[size_str][size_col];
  
  if (size_str > size_col) coils = size_str / 2;
  else coils = size_col / 2;

//   цикл заполнения сассива нулями. //
  for(int str = 0; str < size_str; str++)
  {
    for (int col = 0; col < size_col; col++)
      arr[str][col] = 0;
  }

// циклы заподнения массива числами по спирали //
  while (coils >= 0)
  {
    // верхний ряд с лева на право //
    for (int col = zero_pstn; col <= arr_col; col++)
    {
      if (arr[zero_pstn][col] == 0) // проверка элемента
      {
        arr[zero_pstn][col] = number;
        number++;
      }
    }
    // правый столбец сверху в низ//
    for (int str = zero_pstn + 1; str <= arr_str; str++)
    {
      if (arr[str][arr_col] == 0)//проверка элемента
      {
        arr[str][arr_col] = number;
        number++;
      }
    }
    // нижний ряд с права на лево//
    for (int col = arr_col; col > zero_pstn; col--)
    {
      if (arr[arr_str][col - 1] == 0)// проверка элемента
      {
        arr[arr_str][col - 1] = number;
        number++;
      } 
    }
    // левый столбец снизу в верх//
    for (int str = arr_str; str > zero_pstn + 1; str--)
    {
      if (arr[str - 1][zero_pstn] == 0)// проверка элем.
      {
        arr[str - 1][zero_pstn] = number;
        number++;
      }
    }
    coils--;
    arr_str--;
    arr_col--;
    zero_pstn++;
  }
  // цикл вывода массива //
  for(int str = 0; str < size_str; str++)
  {
    for (int col = 0; col < size_col; col++)
      printf("%3d ", arr[str][col]);
    printf("\n");
  }

  return (0);
}