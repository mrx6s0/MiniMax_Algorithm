
#include <stdio.h>
#include <stdlib.h>

int main()
{
  int n, x, i, y;
  int max, min;
  scanf("%d", &n);

  for (i = 0; i < n; i++)

  {

    scanf("%d %d", &x,&y);

    if (i == 0) /*  lendo o primeiro da sequencia */
      continue;

    else

    {
      max = x;
      min = y;

      if( x >= max)
      
      x = x+1; /* se x for igual ou maior que o máximo, incrementa */ 
      
      if(y <= min)
      
      y = y-1;
      else { 
          
        printf("error...");  
        
        return -1;
  
    }

  }
}


  printf("max = %d, min = %d\n", max, min);

  return 0;
  }
