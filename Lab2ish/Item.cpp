#include "Item.h"
#include <iostream>
#include <string>

Item::Item()
{
  name = "*";
  unit = "*";
  amount = 0;
  price = 0.0;
}

void Item::set_item(std::string name1, std::string unit1, int amount1, double price1)
{
  name = name1;
  unit = unit1;
  amount = amount1;
  price = price1;
}

void Item::print_item()
{
  std::cout << "Name: " << name << std::endl;
  std::cout << "    Count: " << amount << " " << unit << std::endl;
  std::cout << "    Cost: $" << price << std::endl;
}

string Item::get_name()
{
  return name;
}

Item::~Item()
{
}
