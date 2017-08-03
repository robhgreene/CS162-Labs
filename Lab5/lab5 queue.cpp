#include <iostream>

using namespace std;

struct A
{
	char character;
	A *infront;
	A *behind;
};

class Q
{
	private: 
		A *front;
		A *back;
	public:
		Q();
		void addback(char);
		char getfront();
		void removefront();
		bool isempty();
};

Q::Q()
{
	front = 0;
	back = 0;
}

void Q::addback(char input)
{
	if(isempty())
	{
		front = new A;
		front->character = input;
		front->infront = 0;
		front->behind = 0;
		back = front;
	}
	else
	{
		A* temp = new A;
		back->behind = temp;
		temp->infront = back;
		temp->character = input;
		back = temp;
		back->behind = 0;
	}
}

char Q::getfront()
{
	if(front != 0)
		return front->character;
}

void Q::removefront()
{
	A* temp = front->behind;
	delete front;
	front = temp;
}

bool Q::isempty()
{
	if(front == 0)
	{
		return true;
	}
	return false;
}

int main(int argc, char ** argv)
{
	Q q;
	int n;
	cout << "How many characters are you going to enter? "	<< endl;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Enter a character :" << endl;
		char c;
		cin >> c;
		q.addback(c);
	}
	for(int i = 0; i < n; i++)
	{
		cout << "#" << i + 1 << " character: " << q.getfront() << endl;
		q.removefront();
	}
}
