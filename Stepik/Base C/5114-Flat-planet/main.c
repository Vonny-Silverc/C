#include <stdio.h>

int   main(void)
{
  int planet_radius = 0;
  int disc_radius = 0;
  int flight_time = 0;

  scanf("%d", &planet_radius);
  disc_radius = planet_radius * 2;
  flight_time = disc_radius * 2 / 900;
  printf("%d %d", disc_radius, flight_time);
  
  return (0);
}