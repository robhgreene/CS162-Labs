#include "list.h"
#include <iostream>
#include <string>

List::List()
{
	for(int i = 0; i < 10; i++)
	{
		list[i].set_item("*", "*", 0, 0.0);
	}
}

void List::print_List()
{
	for(int i = 0; i < 10; i++)
	{
		if(list[i].get_name() != "*")
		{
			list[i].print_item();
		}
	}
}

void List::remFromList(std::string in_name)
{
	for(int i = 0; i < 10; i++)
	{
		if(list[i].get_name() == in_name)
			list[i].set_item("*", "*", 0, 0.0);
	}
}

void List::add_to_list(std::string in_name, std::string in_unit, int in_count, double in_cost)
{
	for(int i = 0; i < 10; i++)
	{
		if(list[i].get_name() == "*")
		{
			list[i].set_item(in_name, in_unit, in_count, in_cost);
			return;
		}	
	}
	std::cout << "List is full. PLease remove an item before adding another." << std::endl;
}

List::~List()
{
}
