class Area
{
	private:
		int x, y;
		
	public:
		void setValue(int width, int height)
		{
			x = width;
			y = height;
    }
    
		int getArea()
		{
			return (x*y);
		}
};

int main()
{
	Area a;
	int result;
	a.setValue(5,7);
	result = a.getArea();
	cout<<"Result is "<<result;
	return 0;
}
