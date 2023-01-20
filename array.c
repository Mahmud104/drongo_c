#include<stdio.h>

int farrays();


void main(){
   farrays();
} 

int farrays(){

   int max;

   printf("How many inputs do you need ");
   scanf("%i", &max);
   int array_numbers[max];
   for (int i = 0; i < max; i++){

     int number;
     scanf("%i", &number);
     array_numbers[i] = number;
     printf("The values of index %i is stored at %i \n",  i , number);

   }

   printf("Printing the values \n");
   for (int i = 0; i < max; i++)
   { 
        printf("%i \n", array_numbers[i]);


   }
 
 


}
