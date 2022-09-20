class Rectangle 
{
public:
	int width, height;
	int calArea();
};

int Rectangle::calArea()
{
	return width * height;
}