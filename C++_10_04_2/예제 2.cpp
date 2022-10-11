#include <iostream>
using namespace std;

int main()
{
	int n = 10;
	int m;
	char c;
	double d;

	int* p = &n;
	char* q = &c;
	double* r = &d;

	*p = 25;
	*q = 'A';
	*r = 3.14;
	m = *p + 10;

	cout << n << ' ' << *p << "\n";
	cout << c << ' ' << *q << "\n";
	cout << d << ' ' << *r << "\n";
	cout << m<< "\n";
}