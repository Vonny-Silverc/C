#include <stdio.h> 
int       main(void)
{
  int     age = 0, height = 0, weight = 0;
  double  bov = 0.00;
  char    letter = '0';

  scanf("%c",&letter);
  scanf("%d", &age); 
  scanf("%d", &height);
  scanf("%d", &weight);
  
  if (letter == 'm') 
  {
    printf("|  BMR  |\n");
    printf("|%7.2f|\n", bov = 10 * weight + 6.25 * height - 5 * age + 5);
  }
  else if (letter == 'f') 
  {
    printf("|  BMR  |\n");
    printf("|%7.2f|\n", bov = 10 * weight + 6.25 * height - 5 * age - 161);
  }  
  else printf("ERROR!");
  
  return (0);
}