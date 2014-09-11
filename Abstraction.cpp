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

void Area::getArea():
{
	return (x*y);
}

int main()
{
	Area a;
	a.setValue(5,7);
	a.getArea();
	
	return 0;
}
