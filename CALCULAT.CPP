		 /*Programe to find out the smallest among 7 numbers*/

#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
	clrscr();
	double long min,x,y,z,a,b,c,d;
	cout<<" Enter the 7 numbers = ";
	cin>>x>>y>>z>>a>>b>>c>>d;
	min=x;
	if(y<min)
		min=y;
	if(z<min)
		min=z;
	if(a<min)
		min=a;
	if(b<min)
		min=b;
	if(c<min)
		min=c;
	if(d<min)
		min=d;
	cout<<"\n The smallest of the 7 numbers is : "<<min;
	getch();
}