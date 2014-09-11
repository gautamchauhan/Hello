#include<iostream.h>

//Binary Search 

void main()
{
	clrscr();
	int a[100],n,i,first,last,mid,item;

	cout<<"\n------------ BINARY SEARCH ------------ \n\n";
	cout<<"Enter No. of Elements= ";
	cin>>n;

  	cout<<"\nEnter Elements in Sorted Order=\n";
  	for(i=0;i<n;i++)
  	{
    		cin>>a[i];
  	}

  	cout<<"\nEnter Item you want to Search= ";
  	cin>>item;

  	first=0;
  	last=n-1;

  	mid=(first+last)/2;                       // Find Mid Location of Array

	while(first<=last && a[mid]!=item)      // Compare Item and Value of Mid
	{
		if(a[mid]<item)
			first=mid+1;
		else
			last=mid-1;

		mid=(first+last)/2;
	}

	if(a[mid]==item)
	{
		cout<<"\nData is Found at Location : "<<mid+1;
	}
	else
	{
		cout<<"Data is Not Found";
	}

}
