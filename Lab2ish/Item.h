#ifndef ITEM_H
#define ITEM_H
#include <string>

using namespace std;

class Item
{
   private:
      std::string name;
      std::string unit;
      int amount;
      double price;

   public:
      void set_item(std::string, std::string, int, double);
      Item();
      void print_item();
      string get_name();
      ~Item();
};
#endif
