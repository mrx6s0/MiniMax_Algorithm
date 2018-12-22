#include <stdio.h>
#include <stdlib.h>

int main()

{

  int n, x, i, y;
  int max, min;
  
  for (i = 0; i < n; i++)
  printf("Matriz A (nxn): ");
  scanf("%d %d", &n);

  

  {

    scanf("%d %d", &x,&y); 
    scanf("%d %d", &x,&y);
    scanf("%d %d", &x,&y);
    scanf("%d %d", &x,&y);

    if (i == 0) /*  lendo o primeiro da sequencia */
    
       max = x, min = y;

 

    else

    {
        
        for(x=0;x<y;x++)
        
        for(y=0;y>x;y++)

      //if( x >= max) 
        
        //max = x+1;
      
     // x = x+1; /* se x for igual ou maior que o máximo, incrementa */ 
      
      //if(y <= min) 
        
        //min = y-1;
      
       if(x >= min)  max = x-min;
       if(x <= min)  min = y;
       
     // y = y-1;
      else { 
          
        printf("error...");  
        
        return -1;
  
    }

  }
}


  printf("max = %d, min = %d\n,, %d", max, min, y);
  
  return 0;
}
