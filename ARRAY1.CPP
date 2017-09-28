	       /* Program to find out read prices of 20 articles
	       and display sum of all prices and average of them.*/

#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void main()
{
	clrscr();
	double p[20],i,sum=0,avg=0
	for(i=0;i<20;i++)
	{
		cout<<" \n Enter price of item no."<<i+1<<" = ";
		cin<<p[i];
		sum=sum+p[i];
	}
	avg=sum/20;
	cout<<" \n\n Sum of all the prices are = "<<sum;
	cout<<"\n\n Average of all the prices are = "<<avg;
	getch();
}