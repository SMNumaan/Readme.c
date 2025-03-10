#include <stdio.h>

int main()

{  
int n , m; /*  before int with 2 values was written in 2 diff line like
               int n; 
               int m;   */

 printf("Size: ");
// printf("and:  "); in process

 scanf("%d %d" , &n , &m); // this step modified now it can take two values
 

  for (int i = 0; i < n; i++)
   {
     for (int j = 0; j < m; j++)
     {
        printf("#");
     }
   printf("\n");
   }

printf("its a %d by %d matrix\n" , n ,m ); 

return 0;
}