	/* Program to print the below figure
			1
		       222
		      33333
		     4444444
		    555555555          */

#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int i,j,k;
	for(i=1;i<=5;i++)
	{
		for(j=5;j>i;j--)
			cout<<" ";
		for(k=1;k<2*i;k++)
			cout<<i;
		cout<<endl;
	}
	getch();
}

