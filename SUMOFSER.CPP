	   /* Program to calculate the sum of the series
			   1+1/2+1/3+.....+1/n */
#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	double long n,i;
	float sum=0;
	cout<<"Enter the value of n = ";
	cin>>n;
	for(i=1;i<=n;i++)
		sum+=1.0/i;
	cout<<"sum = "<<sum;
	getch();
}
