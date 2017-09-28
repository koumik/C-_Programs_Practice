#include<iostream.h>
#include<conio.h>
void main()
{	long num,a=10,b=1,c=0;
	cout<<"\n Enter a number = ";
	cin>>num;
	do
	{
		c=((num%a)/b)+c;
		a=a*10;
		b=b*10;
	}
	while(b<num);
	cout<<"\n\t sum is = "<<c;
	getch();
}
