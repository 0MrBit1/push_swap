#include <stdio.h>
#include <stdlib.h>

int reverse_rotate_function(int *stake , int  size)
{
   //Shift down all elements of stack a by 1.
   //The last element becomes the first one
    int i;
    int swap;

    i = size -1;
    while(i > 0 )
    {
        swap = stake[i]; 
        stake[i] = stake[i - 1] ;
        stake[i - 1] = swap ; 
        i--;
    }
}
int main(int argc , char **argv)
{

   int *tab; 

   tab = malloc(4 * sizeof(int)) ; 

   tab[0] = -1 ;
   tab[1] =  200;
   tab[2] = 300;
   tab[3] =  400 ;

   reverse_rotate_function(tab , 4) ; 

   int i ;

   i = 0 ; 

   while(i < 4)
   {
      printf("%d , " , tab[i]) ; 
      i++;
   }


   






}