#include <stdio.h>

int   main(void)
{
  int rib_length = 0;
  int face_area = 0;
  int сube_volume = 0;
  int surface_area = 0;

  scanf("%d", &rib_length);
  face_area = rib_length * rib_length;
  surface_area = face_area * 6;
  сube_volume = rib_length * rib_length * rib_length;
  printf("%d %d %d", face_area, surface_area, сube_volume);
  
  return (0);
}