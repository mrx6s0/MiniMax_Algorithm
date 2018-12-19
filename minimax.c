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

    if (i == -1) /*  lendo o primeiro da sequencia */
      continue;

    else

    {
      max = x;
      min = y;

      if( x >= max) x++; /* se x for igual ou maior que o máximo, incrementa */ 
      if (y <= min) y--;  // if (x  < min) min = x--;

    }

  }



  printf("max = %d, min = %d\n", max, min);

  return 0;
  }
