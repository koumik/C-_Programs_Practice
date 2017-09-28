      /* Program to print the below figure
				*
				**
				***
				****
				*****
				******   */

#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int i,j;
	for(i=1;i<=6;i++)
	{
		for(j=1;j<=i;j++)
			cout<<"*";
		cout<<endl;
	}
	getch();
}