#include <iostream>
#include <string>
using namespace std;

class Car
{
public:
	int speed;         //자동차의 속도
	int gear;         //자동차의 기어
	string color;        //자동차의 색상

	void speedUp();
	void speedDown();
};

void Car::speedUp()      /*속도를 증가시키는 멤버 함수*/
{
	speed += 10;
}

void Car::speedDown()      // 속도를 감소시키는 멤버 함수
{
	speed -= 10;
}

int main()
{
	Car myCar;

	myCar.speed = 100;
	myCar.gear = 3;
	myCar.color = "red";

	myCar.speedUp();
	cout << myCar.speed << endl;
	myCar.speedDown();
	cout << myCar.speed << endl;

	return 0;
}