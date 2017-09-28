	   /* Programe to convert Fahrenheit temperature into
	      celcius and celcius temperature to Fahrenheit */

#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
	clrscr();
	int choice;
	double t,c;
	cout<<"\n\n\n\n\n Welcome to the Conversion Calculator ";
	cout<<"\n Enter 1 for converting Fahrenheit to Celcius ";
	cout<<"\n Enter 2 for converting Celcius to Fahrenheit";
	cout<<"\n";
	cin>>choice;
	if(choice==1)
	{    	cout<<"\n Enter the temperature in Fahrenheit = ";
		cin>>t;
		c=(t-32)/1.8;
		cout<<"\n The Temperature in celcius is = "<<c;
	}
	else if(choice==2)
	{	cout<<"\n Enter the temperature in Celcius = ";
		cin>>t;
		c=(1.8*t)+32;
		cout<<"\n The Temperature in Fahrenheit is = "<<c;
	}
	else
		cout<<" *!Invalid Input!* ";
	getch();
}







