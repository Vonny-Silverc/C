#include <stdio.h>

int    main(void)
{
  double  coord_x;
  double  coord_y;
  int     square_nbr;

  coord_x = 0.00;
  coord_y = 0.00;
  square_nbr = 0;
  scanf("%lf %lf", &coord_x, &coord_y);
  if (coord_y > 0)
  {
    coord_x > 0 ? (square_nbr = 1) : (square_nbr = 2);
    printf("%d", square_nbr);
  }
  else
  {
    coord_x > 0 ? (square_nbr = 4) : (square_nbr = 3);
    printf("%d", square_nbr);
  }
  return (0);
}