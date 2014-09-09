#include<iostream.h>

//Sequnetial Search

void main()
{
	int a[100],n,i,item;
	bool itemFound = true; //boolean variable

	cout<<"\n------------ SEQUENTIAL SEARCH ------------ \n\n";
	cout<<"Enter No. of Elements= ";
	cin>>n;

	cout<<"\nEnter Elements\n";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}

	cout<<"\nEnter Item you want to Search= ";
	cin>>item;

	for (i=0; i<n;i++)
	{
		if(a[i]== item)
		{
      			cout<<"\nData is Found at Location : "<<(i+1);
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

