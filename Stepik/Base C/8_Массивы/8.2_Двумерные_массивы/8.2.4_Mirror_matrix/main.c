#include <stdio.h>

int   main(void)
{
  int size = 0;
  
  scanf("%d", &size);

  int arr[size][size];
///Заполняем диагональ и то,что под ней
  for(int str = 0; str < size; str++)
    for(int col = 0; col < size; col++) 
    {    
      if (str != col) arr[str][col] = str - col + 1;
      else arr[str][col] = 1;
    }
///Заполняем над диагональю
  for(int str = 0; str < size; str++)
    for(int col = 0; col < size; col++)
      if(col > str) arr[str][col] = arr[col][str]; 
///Вывод
  for(int str = 0; str < size; str++) 
  {
    for(int col = 0; col < size; col++)
      printf("%d ", arr[str][col]);
    printf("\n");
  }

  return (0);
}