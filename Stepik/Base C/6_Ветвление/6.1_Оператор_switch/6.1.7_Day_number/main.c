#include <stdio.h>

int   main(void)
{
  int month = 0, day = 0, number = 0;
  
  scanf("%d %d", &month , &day);
  number = (month - 1) * 30 + day;
  
  switch(month)
  {
    case 1: printf("%d\n", number);break;
    case 2: printf("%d\n", number + 1);break;
    case 3: printf("%d\n", number - 1);break;
    case 4: printf("%d\n", number);break;
    case 5: printf("%d\n", number);break;
    case 6: printf("%d\n", number + 1);break;   
    case 7: printf("%d\n", number + 1);break;
    case 8: printf("%d\n", number + 2);break;
    case 9: printf("%d\n", number + 3);break;   
    case 10: printf("%d\n", number + 3);break; 
    case 11: printf("%d\n", number + 4);break;   
    case 12: printf("%d\n", number + 4);break;  
  }

  return (0);
}