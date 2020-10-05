#include <stdio.h>

int   main(void)
{
  int age;
    
  age = 0;
  scanf("%d", &age);
  if (age <= 6)
    printf("дошкольник");
  else if (age >= 7 && age <= 18)
    printf("школьник");
  else if (age >= 19 && age <= 59)
    printf("рабочий");
  else
    printf("пенсионер");
  return (0);
}