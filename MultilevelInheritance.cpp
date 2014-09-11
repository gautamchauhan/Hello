class A //A is the Parent of B
{
public:
	void fun1 ()
	{
		cout<<"Inside Parent Class";
	}
};

class B: public Parent //B is the Child A and Parent class of C
{
public:
	void fun2 ()
	{
		cout<<"Inside Child Class";
	}
};

class Child: public Parent //"Child" is the Child or Derived class
{
public:
	void fun2 ()
	{
		cout<<"Inside Child Class";
	}
};

int main ()
{
	Child x;
	x.fun1();
	x.fun2();
	return 0;
}
