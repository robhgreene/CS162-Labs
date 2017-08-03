#ifndef DICE_HPP_
#define DICE_HPP
#include<iostream>
#include <time.h>
#include <cstdlib>

using namespace std; 

class Dice {
protected:
	int sides;
	int roll;
public:
	Dice();
	Dice (int side_num);
	int Roll ();

};

class LoadedDice:public Dice{
public:
	LoadedDice();
	LoadedDice(int side_num);
	int Roll ();

};




#endif
