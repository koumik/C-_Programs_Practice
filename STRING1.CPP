#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<process.h>
void main()
{
	clrscr();
	void convert(float &,char)
	char ch;
	float d;
	cout<<"\n Enter the distance = ";
	cin>>d;
	cout<<"\n\n Convert into feet(F) or inches(I) ??? ";
	cin>>ch;
	switch(ch)
	{
		case 'F':convert(d,'F');
			 break;
		case 'I':convert(d,'I');
			 break;
		default:cout<<"\n\n\n Invalid Choice you Dumbass !!! -_- ";
	}               exit(0);
	cout<<"\n\n\n Distance = "<<d;
	getch();
}
void convert(float &d,char ch)
{
	switch(ch)
	{
		case 'F':d=d/12;
			 break;
		case 'I':d=d*12;
			 break;
	}


