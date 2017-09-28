       /* Program to print out all Armstrong Numbers between 1 to 500 */

#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int i,d1,d2,d3;
	for(i=1;i<=500;i++)
	{
		d1=i/100;
		d2=i/10-d1*10;
		d3=i%10;
		if(d1*d1*d1+d2*d2*d2+d3*d3*d3==i)
			cout<<i<<endl;
	}
	getch();
}