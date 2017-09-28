		/* Program to find out whether a number
		      is a SMITH Number or not . . . */


#include<iostream.h>
#include<conio.h>
void main()
{
	int sumdigit(int);
	int primefactorsum(int);
	int c,num,e,f;
	cout<<"\n Enter the number = ";
	cin>>num;

	e=sumdigit(num);
	f=primefactorsum(num);

	if(e==f)

		cout<<"\n It is a Smith Number";

	else

		cout<<"\n It is not a Smith Number";

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

