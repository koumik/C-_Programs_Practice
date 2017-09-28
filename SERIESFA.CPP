	  /* Program To find out the sum of the series ...
		1+1/1!+1/2!+1/3!+1/4!+....+1/n! */

#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int n,i,a=1;
	float sum=1;
	cout<<"\n Enter Value of n = ";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		a=a*i;
		sum=sum+(1.0/a);
	}
	cout<<"\n Sum = "<<sum;
	getch();
}
