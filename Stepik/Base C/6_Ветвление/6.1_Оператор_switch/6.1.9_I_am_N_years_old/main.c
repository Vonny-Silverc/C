#include <stdio.h>

int   main(void)
{
  int age = 0;  
  
  scanf("%d", &age);
  
  if(age < 10)
  {
    switch (age)
    {
      case 1 : 
        printf("Мне 1 год\n"); break;
      case 2 :
      case 3 :
      case 4 : 
        printf("Мне %d года\n", age); break;
      default: 
        printf("Мне %d лет\n", age); break;  
    }
  }
  else if (age > 19)
  {
    switch (age % 10)
    {
      case 1 : 
        printf("Мне %d год\n", age); break;
      case 2 :
      case 3 :
      case 4 :
        printf("Мне %d года\n", age); break;
      default : 
        printf("Мне %d лет\n", age); break;
    }
  }
  else printf("Мне %d лет\n", age);
  
  return (0);
}