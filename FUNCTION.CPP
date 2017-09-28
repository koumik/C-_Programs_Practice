#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int x;
	double long fx;
	for(x=-10;x<=10;x=x+2)
	{
		fx=((x*x)+(1.5*x)+5)/(x-3);
		cout<<"\n When x = "<<x<<"\t f(x) = "<<fx<<"\n";
	}
	getch();
}