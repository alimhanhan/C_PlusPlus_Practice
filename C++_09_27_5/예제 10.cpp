#include <iostream>
using namespace std;

class Circle
{
public:
	int radius;

	Circle();
	Circle(int r);
	~Circle();
	double getArea();
};

Circle::Circle()
{
	radius = 1;
	cout << "반지름" << radius << "원 생성" << endl;
}

Circle::Circle(int r)
{
	radius = r;
	cout <<"반지름"<<"원 생성" << endl;
}

Circle::Circle()
{
	cout << "반지름" << "원 생성" << endl;
}

double Circle::getArea()
{
	return 3.14 * radius * radius;
}

int main()
{
	Circle dounut;
	Circle pizza(30);

	return 0;
}