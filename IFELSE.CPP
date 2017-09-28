#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int a,b,max,c;
	cout<<" Enter 1st no. = ";
	cin>>a;
	cout<<" Enter 2nd no. = ";
	cin>>b;
	cout<<" Enter 3rd no. = ";
	cin>>c;
	max=a;
	if(b>max)
		max=b;
	if(c>max)
		max=c;
	cout<<" The largest number is = "<<max;
	getch();
}
