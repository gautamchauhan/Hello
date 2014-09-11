class Parent //"Parent" is the Parent or Base class
{
public:
	void fun1 ()
	{
		cout<<"Inside Parent Class";
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
