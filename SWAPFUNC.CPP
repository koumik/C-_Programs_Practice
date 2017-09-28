#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	void swap(int &,int &);
	int a,b;
	cout<<"\n Enter the Value of 1st number = ";
	cin>>a;
	cout<<"\n\n Enter the value of 2nd number = ";
	cin>>b;
	cout<<"\n Original values are = \n ";
	cout<<"a= "<<a<<",b= "<<b<<"\n";
	swap(a,b);
	//cout<<"\n The values after swap() are = \n ";
	//cout<<"a= "<<a<<",b= "<<b<<"\n";
	getch();
}
void swap(int &x,int &y)
{                                             //call by value is "a"
	int temp;                             //call by reference is "&a"
	temp=x;
	x=y;
	y=temp;
	cout<<"\n Swapped values are = ";
	cout<<"a= "<<x<<",b= "<<y<<"\n";
}