#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int a,i;
	cout<<"Enter the number = ";
	cin>>a;
	for(i=2;i<=a/2;i++)

		if(a%i==0)
		{
			cout<<"\n The number is not a prime number";
			break;
		}
		else
			cout<<"\n\n The number is a prime number";
		getch();
}