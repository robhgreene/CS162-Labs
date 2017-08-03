#include <iostream>
#include "average.h"
#include "summation.h"

using namespace std;

int main()
{
   int size;

   cout << "How many numbers would you like to enter?" << endl;
   cin >> size;

   double array[size];

   for(int i = 0; i < size; i++)
   {
      double num;

      cout << "Please give me a number: " << endl;
      cin >> num;

      array[i] = num;
   }

   cout << endl;

   ave(array, size);

   sum(array, size);

   return 0;
}
