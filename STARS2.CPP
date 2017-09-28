	/* Program to print the below figure
				 *
				**
			       ***
			      ****
			     *****
			    ******    */

#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int i,j,k;
	for(i=1;i<=6;i++)
	{
		for(j=6;j>i;j--)
			cout<<" ";
		for(k=1;k<=i;k++)
			cout<<"*";
		cout<<endl;
	}
	getch();
}