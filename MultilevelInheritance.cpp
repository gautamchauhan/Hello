class A //A is the Parent of B
{
public:
	void fun1 ()
	{
		cout<<"Inside Class A";
	}
};

class B: public A //B is the Child class of A and Parent class of C
{
public:
	void fun2 ()
	{
		cout<<"Inside Class B";
	}
};

class C: public B //C is the Child or Derived class of B
{
public:
	void fun3 ()
	{
		cout<<"Inside Class C";
	}
};

int main ()
{
	C x;
	x.fun1();
	x.fun2();
	x.fun3();
	B y;
	x.fun1();
	x.fun2();
	A z;
	x.fun1();
	return 0;
}
