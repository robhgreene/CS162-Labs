#include <iostream>
#include "average.h"

double ave(double array[], int size)
{
   double total = 0;

   for (int i = 0; i < size; i++)
   {
      total += array[i];
   }   

   std::cout << "The average is: "<<  total/size << std::endl;

   return total/size;
}


	 
