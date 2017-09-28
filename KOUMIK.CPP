#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	double long a,b;
	char ch1,ch;
	cout<<"Enter the 1st number = ";
	cin>>a;
	cout<<"Enter the 2nd number = ";
	cin>>b;
	cout<<"\n\n\n\nWelcome to the C++ Calculator";
	cout<<"\n\n\n\nEnter 1 for Addition ";
	cout<<"\nEnter 2 for Substraction ";
	cout<<"\nEnter 3 for Multiplication ";
	cout<<"\nEnter 4 for Division ";


	do
	{
		cin>>ch;
		if(ch=='1')
		{
			cout<<"\n\taddition = "<<a+b;
		}
		if(ch=='2')
		{
			cout<<"\n\tsubstraction = "<<a-b;
		}
		if(ch=='3')
		{
			cout<<"\n\tmultiplication = "<<a*b;
		}
		if(ch=='4')
		{
			cout<<"\n\tdivision = "<<a/b;
		}

		cout<<"\n Want to calculate another (y/n)?";
		cin>>ch1;
		if(ch1=='y' || ch1=='Y')
		{

			cout<<"\n\n\nEnter the 1st number = ";
			cin>>a;
			cout<<"Enter the 2nd number = ";
			cin>>b;
			cout<<"\n Again Enter from choice 1 to 4 : ";
		}
	}
	while(ch1=='y' || ch1=='Y');
	getch();
}