#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
	clrscr();
	double long l,b;
	char ch1,ch;
	cout<<"\n\n Welcome to the Rectangle Calculation Menu ";
	cout<<"\n Enter the value of length and breadth = ";
	cin>>l>>b;
	cout<<"\n\t Enter 1 for Area ";
	cout<<"\n\tEnter 2 for Perimeter ";
	cout<<"\n\tEnter 3 for diagonal ";
	do
	{
		cin>>ch;
		if(ch=='1')
		{
			cout<<"\n Area of the rectangle : "<<l*b;
		}
		else if(ch=='2')
		{
			cout<<"\n Perimeter of the rectangle : "<<2*(l+b);
		}
		else if(ch=='3')
		{
			cout<<"\n Diagonal of the rectangle : "<<sqrt((pow(l,2))+(pow(b,2)));
		}
		else

			cout<<" *!! Invalid Input !!* ";

		cout<<"\n\n Want to calculate again (y/n)??? ";
		cin>>ch1;
		if(ch1=='y' || ch1=='Y')
		{
			cout<<"\n Enter the value of length and breadth = ";
			cin>>l>>b;
			cout<<"\n\n Again choose from 1 to 3 = ";
		}
	}
	while(ch1=='y' || ch1=='Y');
	getch();
}









