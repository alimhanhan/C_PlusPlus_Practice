#include <iostream>
using namespace std;

class MyVector
{
	int* p;
	int size;
public:
	MyVector()
	{
		p = new int[100];
		size = 100;
	}
	MyVector(int n)
	{
		p = new int[n];
		size = n;
	}
	~MyVector()
	{
		delete[] p;
	}
};

int main()
{
	MyVector* v1, * v2;
	v1 = new MyVector();
	v2 = new MyVector(1024);

	delete v1;
	delete v2;
}