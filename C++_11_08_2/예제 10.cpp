#include <iostream>
using namespace std;

class Myarray
{
public:

	int size;
	int* data;

	Myarray(int size)
	{
		this->size = size;
		data = new int[size];
	}

	Myarray(const Myarray& other)
	{
		this->size = other.size;
		this->data = new int[other.size];

		for (int i = 0; i < size; i++)
		{
			this->data[i] = other.data[i];
		}
	}

	~Myarray()
	{
		if (data != nullptr)
		{
			delete[] this->data;
			data = nullptr;
		}
	}

	void show()
	{
		cout << size << ", " << data << endl;
	}
};

int main()
{
	Myarray buffer(10);
	buffer.data[0] = 1;
	Myarray clone = buffer;
	buffer.show();
	clone.show();
}