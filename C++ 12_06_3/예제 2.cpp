#include <iostream>
using namespace std;

template <class T>
T bigger(T a, T b)
{
	if (a > b)
	{
		return a;
	}
	else
	{
		return b;
	}
}

int main()
{
	int a = 20;
	int b = 30;
	char c = 'a';
	char d = 'g';

	cout << "bigger(20,30)의 결과는 " << bigger(a, b) << endl;
	cout << "bigger('a','g')의 결과는 " << bigger(c, d) << endl;
}