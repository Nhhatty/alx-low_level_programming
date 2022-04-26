#include<stdio.h>
#include <stdlib.h>
int main()
{   
		
   int number;	
   for(number=0; number<10; number++)        /*for loop to print 0-10 numbers*/ 
   {
        putchar(number%10 + '0' );            /*to print the number*/
   }
   putchar('\n');
   return 0;
}   
