#include<iostream.h>

void main()
{
	clrscr();
	int a[100],n,i,beg,end,mid,item;

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

  	beg=1;
  	end=n;

  	mid=(beg+end)/2;                       // Find Mid Location of Array

	while(beg<=end && a[mid]!=item)      // Compare Item and Value of Mid
	{
		if(a[mid]<item)
			beg=mid+1;
		else
			end=mid-1;

		mid=(beg+end)/2;
	}

	if(a[mid]==item)
	{
		cout<<"\nData is Found at Location : "<<mid;
	}
	else
	{
		cout<<"Data is Not Found";
	}

}
