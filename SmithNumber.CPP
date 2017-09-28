/* Program to find Smith Number */




#include<iostream.h>
#include<conio.h>
int sumdigit(int);
int primefactorsum(int);
class set
{
	public:
		int num,e,f;
		void input();
		void check();
}A;
void set::input()
{
	cout<<" \nEnter the number = ";

	cin>>num;
	if(num<=0)
	{
		cout<<"\n Enter a number other than zero or negative number";
		input();
	}
}
void set::check()
{
	e=sumdigit(num);
	f=primefactorsum(num);
	if(e==f)
		cout<<"\n It is a Smith number ";

	else

		cout<<"\n Not a smith number ";
}

void main()
{
	clrscr();
	A.input();
	A.check();
	getch();
}
int sumdigit(int x)
{
	int a=10,b=1,c=0,g;
	do
	{
		c=((x%a)/b)+c;
		a=a*10;
		b=b*10;
	}
	while(b<x);
	g=c;
	return (g);
}

int primefactorsum(int y)
{
	int i,sum=0,h,l;
	for(i=2;i<=y;i++)
	{
		while(y%i==0)
		{
			y=y/i;
			h=sumdigit(i);
			sum=sum+h;
		}
	}
	l=sum;
	return (l);

}



