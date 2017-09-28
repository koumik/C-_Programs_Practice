#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	float val1,val2,sum;
	cout<<"\nEnter 1st value:  ";
	cin>>val1;
	cout<<"Enter 2nd value:  ";
	cin>>val2;
	if(val1>val2)
	{
		sum=val1-val2;
		cout<<"The subtract of two numbers =  ";
		cout<<sum;
	}
	else
	{
		if(val1<val2)
		{
			sum=val1+val2;
			cout<<"The sum of two numbers =  ";
			cout<<sum;
		}

	}
	getch();
}