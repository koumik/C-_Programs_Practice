    /* Program to print the below pattern
		1
	       212
	      32123
	     4321234
	    543212345     */

#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int i,j,k,l;
	for(i=1;i<=5;i++)
	{
		for(j=5;j>i;j--)
			cout<<" ";
		for(k=i;k>=1;k--)
			cout<<k;
		for(l=2;l<=i;l++)
			cout<<l;
		cout<<endl;
	}
	getch();
}

