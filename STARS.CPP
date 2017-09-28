		 /* Program to print the below figure
				**********
				**********
				**********
				**********      */

#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int i,c;
	for(i=1;i<=4;i++)
	{
		for(c=1;c<=10;c++)

			cout<<"*";
		cout<<endl;
	}
	getch();
}