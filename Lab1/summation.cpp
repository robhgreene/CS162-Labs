#include <iostream>
#include "summation.h"

double sum(double array[], int size)
{
   float total = 0;

   for (int i = 0; i < size; i++)
   {
      total += array[i];
   }   

   std::cout << "The sum is: " << total << std::endl;

   return total;
}
