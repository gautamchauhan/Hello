#include<iostream.h>
#include<conio.h>

void main()
{
	clrscr();
	int a[100],n,i,item;
	bool itemFound = true; //boolean variable

	cout<<"\n------------ BINARY SEARCH ------------ \n\n";
	cout<<"Enter No. of Elements= ";
	cin>>n;

	cout<<"\nEnter Elements in Sorted Order=\n";
	for(i=1;i<=n;i++)
	{
		cin>>a[i];
	}

	cout<<"\nEnter Item you want to Search= ";
	cin>>item;

	for (i=1; i<=n;i++)
	{
		if(a[i]== item)
		{
      			cout<<"\nData is Found at Location : "<<i;
		} 
		else 
		{
			itemFound = false;
		}
	}
	if(itemFound == false)
	{
		cout<<"Data is Not Found";
	}
}

