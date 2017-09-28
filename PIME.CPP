#include<iostream.h>
#include<conio.h>
#include<process.h>
void main()
{
	clrscr();
	int num,i;
	cout<<"Enter the number = ";
	cin>>num;
	for(i=2;i<=num/2;++i)

		if(num%i==0)
		{
			cout<<"\n The number is not a prime number";
			exit(0);
		}

		cout<<"\n\n The number is a prime number";

	 getch();

}