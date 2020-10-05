#include <stdio.h> 
int   main(void)
{
  int     age;
  int     height;
  int     weight;
  double  bov_m;
  double  bov_f;
  char    letter;

  age = 0;
  height = 0;
  weight = 0;
  bov_m = 0.00;
  bov_f = 0.00;
  letter = '0';
  scanf("%c",&letter);
  scanf("%d", &age); 
  scanf("%d", &height);
  scanf("%d", &weight);
  bov_m = 10 * weight + 6.25 * height - 5 * age + 5;
  bov_f = 10 * weight + 6.25 * height - 5 * age - 161;
  if (letter == 'm') 
  {
    printf("|  BMR  |\n");
    printf("|%7.2f|\n", bov_m);
  }
  else if (letter == 'f') 
  {
    printf("|  BMR  |\n");
    printf("|%7.2f|\n", bov_f);
  }  
  else
    printf("ERROR!");
  return (0);
}