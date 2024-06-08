#include <stdio.h>
#include <stdlib.h>

void swap_values (int *addr1 , int *addr2 )
{
    int swap ; 

    swap = *addr1 ; 
    *addr1 = *addr2 ; 
    *addr2 =  swap ; 
}

int *bubble_sort(int *stake , int size)
{
    int i ;
    int j ; 
    int min ;  

    i = 0 ; 
    j = 0; 
    min = i ; 

    while (i < size)
    {
        while(j < size)
        {
            if (stake[j] < stake[min])
            {
                min = j; 
            }
            j++;
        }
        swap_values ( &(stake[i]) , &(stake[min]) ) ; 
        i++ ;
        j = i ;
        min = i ; 
    }
}

int main(int argc , char **argv)
{

    int tab[10] = {10 , 9 , 8 , 7 , -6 , 5 , 4 , 3 , 2 , 1 } ; 

    bubble_sort( tab,  10) ; 


    int i = 0 ; 

    while(i < 10 ) 
    {
        printf("%d\n" , tab[i] ) ; 
        i++;
    }

}