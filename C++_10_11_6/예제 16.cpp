#include <iostream>
using namespace std;

class Circle      //Circle 클래스 생성
{
	int radius;

public:
	Circle();
	~Circle() {}

	void setRadius(int r) { radius = r; }
	double getArea() { return 3.14 * radius * radius; }
};    //클래스 생성 시에는 마지막에 ;(세미콜론) 존재해야 함

Circle::Circle()
{
	radius = 1;
}

int main()
{
	cout << "생성할 원 개수 = ";
	int n, radius;
	cin >> n;

	Circle* pArray = new Circle[n];

	for (int i = 0; i < n; i++)
	{
		cout << "원" << i + 1 << ": ";
		cin >> radius;
		pArray[i].setRadius(radius);
	}

	int count = 0;

	Circle* p = pArray;

	for (int i = 0; i < n; i++)
	{
		cout << p -> getArea() << ' ';

		if (p -> getArea() >= 100 && p -> getArea() <= 200)
		{
			count++;
		}

		p++;
	}

	cout << endl << "면적이 100~200 사이인 원 개수 = " << count << endl;

	delete[] pArray;
}