#include <iostream>
using namespace std;

int main()
{
	int* p;

	p = new int;
	if (!p)
	{
		cout << "메모리 할당 불가";
		return 0;
	}

	*p = 5;
	int n = *p;
	cout << "*p = " << *p << '\n';
	cout << "n = " << n << '\n';

	delete p;
}