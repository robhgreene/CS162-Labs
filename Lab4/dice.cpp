#include "dice.hpp"

Dice::Dice(){
	sides=6;
}
Dice::Dice(int side_num){
	sides=side_num;
}

 int Dice:: Roll(){
	srand(time(NULL));
	roll=rand()%sides+1;
	return roll;
}

LoadedDice::LoadedDice(){
	sides=6;
}
LoadedDice::LoadedDice(int side_num){
	sides=side_num;
}

 int LoadedDice:: Roll(){
	int chance;
	srand(time(NULL));
	roll=rand()%sides+1;
	cout<<"roll unmodifed: "<<roll<<endl;
	if (roll!=sides){
		chance=rand()%20+1;
		if (chance==1){
			roll=roll+1;

		}else {
			cout<<"It's not in 5%"<<endl;
		}	
	}
		
	return roll;
}
