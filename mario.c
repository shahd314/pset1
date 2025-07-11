#include <stdio.h>
#include <cs50.h>
int main ()
{

   int cou ;
   do {

    cou = get_int("count :");

   } while(cou < 1 || cou > 8) ;



   for ( int i = 0; i <cou  ; i++)
   {
     for ( int j = 0 ; j < cou -i-1; j++ )
     {
         printf(" ") ;

     }
     for ( int k =0 ; k<= i ; k++){
        printf("#") ;
     }

   printf("\n") ;

     }

   }








