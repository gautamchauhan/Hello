class Area
{
	private:
		int x, y, area;
	public:
		void setValue(int width, int height);
		int getArea();
};

void Area::setValue(int width, int height)
{
	x = width;
	y = height;
}

int Area::getArea():
{
	return (x*y);
}

int main()
{
	Area a;
	int result;
	a.setValue(5,7);
	result = a.getArea();
	cout<<"Result is "<<result;
	return 0;
}
