#include <iostream>
using namespace std;

class Car
{
	int speed;

public:
	void setSpeed(int speed) { this->speed = speed; }
	int setSpeed() { return speed; } // {cout << speed << endl;} 의 형태로도 작성 가능
	void getSpeed();
};

void Car::getSpeed()
{
	cout << speed << endl;
}

class SportsCar : public Car
{
	bool turbo;
public:
	void setTurbo(bool newValue) { turbo = newValue; }
	void getTurbo()
	{
		cout << turbo << endl;
	}
};

int main()
{
	SportsCar c;
	SportsCar* pC = &c;

	c.setSpeed(60);
	c.setTurbo(true);
	c.getSpeed();
	c.getTurbo();

	pC->getSpeed();
	pC->getTurbo();
}