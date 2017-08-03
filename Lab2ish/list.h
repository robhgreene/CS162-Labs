#ifndef LIST_H
#define LIST_H
#include "Item.h"

class List
{
   private:
      Item list[10];

   public:
      List();
      void add_to_list(std::string, std::string, int, double);
      void remFromList(std::string);
      void print_List();
      ~List();
};
#endif
