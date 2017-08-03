#include "dice.hpp"
#include <iostream>
#include <ctime>

using namespace std;

void check(int&);

int main(){
	int side1,side2, side3;
	cout<<"Enter number of side for first dice: ";
	cin>>side1;
	check(side1);
	cout<<"Enter number of side for second dice: ";
	cin>>side2;
	check(side2);
	cout<<"Enter number of side for third dice: ";
	cin>>side3;
	check(side3);
	Dice o1(side1);
	Dice o2(side2);
	LoadedDice r(side3);
	int t1,t2,t3,total;
	for (int i=1; i<11;i++){
		t1=o1.Roll();
		t2=o2.Roll();
		total+=t1;
		total+=t2;
	}
t3=r.Roll();
cout<<"Loaded dice roll: "<<t3<<endl;
cout<<"total for two dices= "<<total<<endl;
	return 0;
}

void check (int &s){
	if(s<=0){
		cout<<"You cannot have dice with 0 or negative sides. Please enter again: ";
		cin>>s;
		check(s);
	}
}

